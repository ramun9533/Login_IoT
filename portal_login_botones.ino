#include <WiFi.h>
#include <DNSServer.h>
#include "data.h"
const byte DNS_PORT = 53;
IPAddress apIP(8, 8, 4, 4); // The default Android DNS
DNSServer dnsServer;
WiFiServer server(80);

// Credenciales de inicio de sesión (cambia a tus propias credenciales)
const char* username = "Admin";
const char* password = "admin";

bool isAuthenticated = false;

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_AP);
  WiFi.softAP("Pollito");
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));

  dnsServer.start(DNS_PORT, "*", apIP);

  server.begin();
}

void handleLoginPage(WiFiClient client) {
  if (isAuthenticated) {
    // Redirigir a la segunda página después de iniciar sesión
    client.println("HTTP/1.1 302 Found");
    client.println("Location: /mainPage");
    client.println();
    client.println(responseMain);
  } else {
    // Mostrar la página de inicio de sesión
    client.println("HTTP/1.1 200 OK");
    client.println("Content-type:text/html");
    client.println();
    client.println(responseHTML);
  }
}

void handleMainPage(WiFiClient client) {
  
  client.println("HTTP/1.1 200 OK");
  client.println("Content-type:text/html");
  client.println();
  client.println(responseHTML);
}

void loop() {
  dnsServer.processNextRequest();
  WiFiClient client = server.available();

  if (client) {
    String currentLine = "";
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        if (c == '\n') {
          if (currentLine.length() == 0) {
            if (!isAuthenticated) {
              handleLoginPage(client);
            } else {
              handleMainPage(client);
            }
            break;
          } else {
            currentLine = "";
          }
        } else if (c != '\r') {
          currentLine += c;
        }

        // Check if the user has submitted the login form
        if (currentLine.indexOf("POST /login") != -1) {
          if (currentLine.indexOf("Admin=" + String(username)) != -1 &&
              currentLine.indexOf("admin=" + String(password)) != -1) {
            isAuthenticated = true;

            // Redirigir a la segunda página después de iniciar sesión
            //client.println("HTTP/1.1 302 Found");
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println();
            client.println(responseMain);
            client.println();
          }
        }
      }
    }
    client.stop();
  }
}
