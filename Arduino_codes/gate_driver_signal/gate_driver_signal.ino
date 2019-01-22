
const byte analogInput = A0;
const byte pwmOutput = 3;

void setup() {
  pinMode(pwmOutput, OUTPUT);
  pinMode(analogInput, INPUT);
}

void loop() {
  float value = analogRead(analogInput) / 5;
  analogWrite(pwmOutput, value);
}
