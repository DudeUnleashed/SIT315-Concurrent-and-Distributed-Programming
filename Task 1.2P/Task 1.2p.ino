// C++ code
//

const byte TMP_PIN = A1;
const byte LED_PIN = 13;
const byte BTN_PIN = 2;
  
void setup()
{
  pinMode(TMP_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(BTN_PIN), interrupt, CHANGE);
}

void loop()
{

}

void interrupt()
{
  double temp = analogRead(TMP_PIN);
  if (temp > 250) {
  	digitalWrite(LED_PIN, HIGH);
  }
  else { digitalWrite(LED_PIN, LOW); }
  
  Serial.print(temp);
  Serial.println();
}