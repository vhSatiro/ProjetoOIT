<?php
 	$port = fopen("/dev/ttyACM1", "w");
	fwrite($port, "g");
	fclose($port);
?>
<!DOCTYPE html>
<head>
  <meta charset="UTF-8" />
  <title>Alimentador de animais</title>
  <link rel="stylesheet" type="text/css" href="style.css">
  
</head>

<body>
  <div class="login">
    <div class="login-triangle"></div>

    <h2 class="login-header">Alimentador de animais</h2>
    <form class="login-container" method="POST" action="motor.php">
      <p>
        <label>Sensor de peso</label>
        <input type="text" name="peso">
      </p>
      <input type="submit" value="ligarMotor" name="motor">Liberar ração!</button>
    </form>
  </div>
</body>

</html>