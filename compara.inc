<?php
 
    $idioma = $_COOKIE["idiomaperso"];

    $ponteiro = fopen("/opt/lampp/htdocs/trabalho/versao.txt", "w+");

    
    if(!$ponteiro)
        echo "erro na abertura";

    else
        {
            switch ($idioma) {
                case "ingles":
                echo "<br><b>OUR PLANT</b> <br><br> The XXX INDÚSTRIA DE MÁQUINAS LTDA, was founded on 1970, and became the most important and traditional supplyer of BAGGING MACHINES in Brazil.";
                break;

                case "portugues":
                echo "<br> <b>A EMPRESA</b> <br><br> A XXX INDÚSTRIA DE MÁQUINAS LTDA, foi fundada em 1970, e tornou-se o mais importante e tradicional fabricante de máquinas ensacadeiras no Brasil.";
                break;

                case "espanhol":
                echo "<br> <b>EMPRESA</b> <br><br> La XXX INDÚSTRIA DE MÁQUINAS LTDA, fue fundada en 1970, y sé a convertido en la más importante y tradicional fabrica de MÁQUINAS ENSACADORAS em Brasil.";
                break;
            }
            fwrite($ponteiro, $texto);

            $ler = file_get_contents("/opt/lampp/htdocs/trabalho/versao.txt", "r");
            echo $ler;


            fclose($ponteiro);
        }
    

  
    echo "<a href='excluir_cookie.php'><br><br><br>escolher novo idioma </a>";
  
?>