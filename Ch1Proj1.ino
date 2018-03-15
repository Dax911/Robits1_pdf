const int baudRate = 9600;

void setup() {
  // put your setup code here, to run once:
Serial.begin(baudRate);
for(char l = 32; l <= 126; l++){
  Serial.print(l);
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
