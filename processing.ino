unsigned int ADCValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(0);
  val = map(val, 0, 300, 0, 255);
  Serial.println(val);
  delay(50);
}
