<?php
    setcookie("idiomaperso", "", time()-3600); 
    header ("Location:index.php"); 
    exit();
?>