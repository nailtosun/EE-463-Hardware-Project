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
  // one period is 20 ms (50 Hz) 
  digitalWrite(pulse_a, HIGH);
  delay(1); // milisecond %5 duty cycle pulse 
  digitalWrite(pulse_a, LOW);
  delay(9); // 1+9 = 10 ms finishing the half cycle 
  digitalWrite(pulse_a_180, HIGH);
  delay(1); // milisecond %5 duty cycle pulse 
  digitalWrite(pulse_a_180, LOW);
}

