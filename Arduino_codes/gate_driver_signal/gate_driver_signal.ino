
const byte pulse_a = 7;
const byte interruptPin = 2;
const byte pulse_a_180 = 8;
const byte interruptPin2 = 3;

void setup() {
  pinMode(pulse_a, OUTPUT);
  pinMode(interruptPin, INPUT);
  pinMode(pulse_a_180, OUTPUT);
  pinMode(interruptPin2, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), pulse_1_2, RISING);
  attachInterrupt(digitalPinToInterrupt(interruptPin2), pulse_3_4, RISING);
}

void loop() {
  
}
void pulse_1_2(){
  digitalWrite(pulse_a, HIGH);
  delay(0.02);
  digitalWrite(pulse_a, LOW);
}
void pulse_3_4(){
  digitalWrite(pulse_a_180, HIGH);
  delay(0.02);
  digitalWrite(pulse_a_180, LOW);

}
