const int baudRate = 9600;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(baudRate);
  int Var = 20;
  if (Var % 2 == 0)
  {
    Serial.print("Var is even");
  }
  else
  {
    Serial.print("Var is odd");
  }
}
  void loop() {
    // put your main code here, to run repeatedly:

  }
