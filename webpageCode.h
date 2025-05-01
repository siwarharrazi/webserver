const char webpageCode[] =
R"=====( 
<!DOCTYPE html>
<html>
<head>
  <style>
    body {
      font-family: "Calibri";
      background-color: grey;
      text-align: center;
    }
    h1 {
      color: whitesmoke;
      font-size: 50px;
    }
    .btn {
      display: inline-block;
      padding: 20px 40px;
      margin: 20px;
      font-size: 30px;
      text-decoration: none;
      color: white;
      border-radius: 15px;
      box-shadow: 0 5px 15px rgba(0,0,0,0.3);
    }
    .on {
      background-color: green;
    }
    .off {
      background-color: red;
    }
  </style>
</head>
<body>
  <h1>ESP8266 LED Control</h1>
  <a href="/on" class="btn on">Allumer LED</a>
  <a href="/off" class="btn off">Éteindre LED</a>
</body>
</html>
)=====";
