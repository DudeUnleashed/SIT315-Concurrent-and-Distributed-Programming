// C++ code
//

const byte TMP_PIN = A3;
const byte LED_PIN = 13;
  
void setup()
{
  pinMode(TMP_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  double temp = analogRead(TMP_PIN);
  if (temp > 250) {
  	digitalWrite(LED_PIN, HIGH);
  }
  else { digitalWrite(LED_PIN, LOW); }
  Serial.print(temp);
  Serial.println();
  delay(500);
}