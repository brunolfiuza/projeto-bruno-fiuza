int _ABVAR_1_sensordeluz = 0 ;
int __ardublockAnalogRead(int pinNumber)
{
  pinMode(pinNumber, INPUT);
  return analogRead(pinNumber);
}


void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  _ABVAR_1_sensordeluz = __ardublockAnalogRead(A0) ;
  Serial.print("message");
  Serial.print(" ");
  Serial.print(_ABVAR_1_sensordeluz);
  Serial.print(" ");
  Serial.println();
  if (( ( _ABVAR_1_sensordeluz ) > ( 900 ) ))
  {
    __ardublockDigitalWrite(10, HIGH);
    analogWrite(5 , 255);
  }
  else
  {
    __ardublockDigitalWrite(10, LOW);
    analogWrite(5 , 0);
  }
}
