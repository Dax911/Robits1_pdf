const int baudRate = 9600;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(baudRate);
  char c;
  c = "a";
  Serial.println("Character = a");
  Serial.print("ASCII value = ");
  Serial.println(c, DEC);
}

void loop() {
  // put your main code here, to run repeatedly:

}
