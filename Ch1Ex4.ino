const int baudRate = 9600;
void setup() {
  Serial.begin(baudRate);
    int start = 21;
    int en = 39;
        for(int n = start; n <= en; n+=3)
    {
        Serial.print("N = ");
        Serial.println(n);
    }
}
void loop() {
  

}

