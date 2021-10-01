<?php

    $dbServer = "localhost";
    $dbUser = "root";
    $dbPassword = "";
    $database = "collegedb";

    $conn = mysqli_connect($dbServer,$dbUser,$dbPassword,$database) or die('Mysqli connection fail:' . mysqli_connect_error());



?>