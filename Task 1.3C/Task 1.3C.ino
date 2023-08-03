// C++ code
//

const byte LED_PIN_RED = 12;
const byte LED_PIN_GREEN = 13;
const byte PIR_PIN = 3;
const byte BTN_PIN = 2;
  
void setup()
{
  pinMode(PIR_PIN, INPUT);
  pinMode(BTN_PIN, INPUT);
  pinMode(LED_PIN_RED, OUTPUT);
  pinMode(LED_PIN_GREEN, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(PIR_PIN), interrupt1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(BTN_PIN), interrupt2, CHANGE);
}

void loop()
{

}

void interrupt1()
{
  double sensor = digitalRead(PIR_PIN);
  Serial.print(sensor);
  Serial.println();
  if (sensor) {
  	digitalWrite(LED_PIN_GREEN, HIGH);
  }
  else { digitalWrite(LED_PIN_GREEN, LOW); }
}

void interrupt2()
{
  double sensor = digitalRead(BTN_PIN);
  Serial.print(sensor);
  Serial.println();
  if (sensor) {
  	digitalWrite(LED_PIN_RED, HIGH);
  }
  else { digitalWrite(LED_PIN_RED, LOW); }
}