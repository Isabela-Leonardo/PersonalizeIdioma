<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>IDIOMAS</title>
    <link rel="stylesheet" href="style.css">

    <?php
        if (ISSET($_COOKIE["idiomaperso"]))
        {
            include 'compara.inc';
         }
        else
        {
    
    ?>


</head>
    <body>
        <div>
            <center>
            <h1>Bem vindo ao Site Web Design em Foco</h1>
            <br>
            <p>Escolha o idioma para entrar</p>
            <br><br>
            
            <a href="idioma.php?id=ingles"><img src="img/band_reinounido.png"></a>
            <a href="idioma.php?id=portugues"><img src="img/band_brasil.png"></a>
            <a href="idioma.php?id=espanhol"><img src="img/band_espanha.png"></a>

            
            </center>
        </div>
    <?php
        }
    ?>
    </body>
</html>