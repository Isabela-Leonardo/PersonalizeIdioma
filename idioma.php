<?php
    $idioma = $_GET["id"]; 
    setcookie("idiomaperso", "$idioma", time()+259200); 
    header ("Location:index.php"); 
?>