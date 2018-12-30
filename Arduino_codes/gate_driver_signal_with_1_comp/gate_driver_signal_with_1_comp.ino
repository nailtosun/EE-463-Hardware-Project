const byte pulse_a = 7;
const byte interruptPin = 2;
const byte pulse_a_180 = 8;
void setup() {
  pinMode(pulse_a, OUTPUT);
  pinMode(pulse_a_180, OUTPUT);
  pinMode(interruptPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), pulse, RISING);
}

void loop() {
  
}
void pulse(){
  digitalWrite(pulse_a, HIGH);
  delay(0.02);
  digitalWrite(pulse_a, LOW);
  delay(9.08);
  digitalWrite(pulse_a_180, HIGH);
  delay(0.02);
  digitalWrite(pulse_a_180, LOW);
}

