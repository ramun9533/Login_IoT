  String responseHTML = R"====(<!DOCTYPE html>
<!DOCTYPE html>
<html lang="es">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Identificador</title>
    <style>
        body {
             background-image: linear-gradient(to bottom right,#5a07f0, #d17bff);
            margin: 1%;
            padding: 9.5%;
            font-family: Arial, sans-serif;
        }

        h1 {
            text-align: center;
            font-size: 18px;
            color: white;
            padding: 0px;
            margin:0px;
        }
        h2{
          color: white;
        }
        p{
          color: white;
          }
          button{
              pading:0%;
          margin: 30%;
          }
          label{
            pading:0%;
          margin: 30%;
          color: white;
           font-weight: bold;
          }
        input{
          pading:0%;
          margin: 10%;
          }
        .container {
            width: 80%;
            height: inherit;
            display: flex;
            flex-wrap: wrap;
            justify-content: center;
            align-items: center;
            padding: 0%;
            margin: 12%;
            background-color: #4f37d2;
            position: relative;
            border: 2px solid;
            border-radius: 20px;
            box-shadow: rgb(150,150,150) 5px 5px 20px;
        }

        .box {
            padding: 10px;
            text-align: center;
        }

        .box a {
            display: block;
            margin-bottom: 10px;
            text-decoration: none;
            background-color: #09885f;
            color: white;
            padding: 10px;
            border-radius: 5px;
            transition: background-color 0.3s;
        }

        .box a:hover {
            bbackground-color: #e3bf0e;
        }
        .box a:active{
            background-color: red;
        }

        @media (min-width: 768px) {
            .container {
                max-width: 600px;
            }
        }

        @media (min-width: 992px) {
            .container {
                max-width: 800px;
            }
        }

        @media (min-width: 1200px) {
            .container {
                max-width: 1000px;
            }
        }
    </style>
</head>
<body>

<h1>Internet de las cosas</h1>

<div class="container">
  <h2>Iniciar Sesión</h2>
  <form id="login-form">
    <label for="username" class="center">Usuario:</label>
    <input type="text" id="Admin" required><br><br>

    <label for="password" class="center">Contraseña:</label>
    <input href= "" type="password" id="admin" required><br><br>

    <button type="submit" class="center">Iniciar Sesión</button>
  </form>
    
    <!-- Repite los demás bloques de filas de la tabla siguiendo el mismo formato -->
</div>

 </body>  </html>
    )====";
    const String responseMain =  R"====(<!DOCTYPE html>
<html lang="">
  <head>
    <meta charset="utf-8">
    <title>Neon Letras</title>
     <style>:root {
    --shadow-color: #83c5be;
    --shadow-color-light: violet;
  }
  
  * {
    padding: 0;
    margin: 0;
    box-sizing: border-box;
  }
  
  body {
    font-family: "Archivo", sans-serif;
    background-color: #051b15;
  }
  
  p {
    margin: calc(50vh - 40px) auto 0 auto;
    font-size: 65px;
    /*text-transform: uppercase; cambnia a mayusculas*/
    font-family: "Archivo Black", "Archivo", sans-serif;
    font-weight: normal;
    display: block;
    height: auto;
    text-align: center;
  }
  
  .logo-1 {
    color: white;
    animation: neon 3s infinite;
  }
  
  @keyframes neon {
    0% {
      text-shadow: -1px -1px 1px var(--shadow-color-light), -1px 1px 1px var(--shadow-color-light), 1px -1px 1px var(--shadow-color-light), 1px 1px 1px var(--shadow-color-light),
      0 0 3px var(--shadow-color-light), 0 0 10px var(--shadow-color-light), 0 0 20px var(--shadow-color-light),
      0 0 30px var(--shadow-color), 0 0 40px var(--shadow-color), 0 0 50px var(--shadow-color), 0 0 70px var(--shadow-color), 0 0 100px var(--shadow-color), 0 0 200px var(--shadow-color);
    }
    50% {
      text-shadow: -1px -1px 1px var(--shadow-color-light), -1px 1px 1px var(--shadow-color-light), 1px -1px 1px var(--shadow-color-light), 1px 1px 1px var(--shadow-color-light),
      0 0 5px var(--shadow-color-light), 0 0 15px var(--shadow-color-light), 0 0 25px var(--shadow-color-light),
      0 0 40px var(--shadow-color), 0 0 50px var(--shadow-color), 0 0 60px var(--shadow-color), 0 0 80px var(--shadow-color), 0 0 110px var(--shadow-color), 0 0 210px var(--shadow-color);
    }
    100% {
      text-shadow: -1px -1px 1px var(--shadow-color-light), -1px 1px 1px var(--shadow-color-light), 1px -1px 1px var(--shadow-color-light), 1px 1px 1px var(--shadow-color-light),
      0 0 3px var(--shadow-color-light), 0 0 10px var(--shadow-color-light), 0 0 20px var(--shadow-color-light),
      0 0 30px var(--shadow-color), 0 0 40px var(--shadow-color), 0 0 50px var(--shadow-color), 0 0 70px var(--shadow-color), 0 0 100px var(--shadow-color), 0 0 200px var(--shadow-color);
    }
  } 
 </style>
  </head>
  <body>
    <header></header>
    <main></main>
    <p class="logo-1">
      IPN
    </p>
    <p class="logo-1">
      UPIIC
    </p>
    <footer></footer>
  </body>
</html>
)====";
    const String responseHTML1 =  R"====(<div class="box">
        <p>SALIDA # )====";
     const String responseHTML2  = R"====(</p>
        <a href="/on)====";
     const String responseHTML3  = R"====(">ON</a>
        <a href="/off)====";
     const String responseHTML4  = R"====(">OFF</a>&nbsp
    </div>)====";  
  const String responseHTML5 =  R"====(  </div>    </body>  </html>
     )====";
