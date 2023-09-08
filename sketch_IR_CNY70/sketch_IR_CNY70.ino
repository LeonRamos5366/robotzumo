int p;
int cny_LED = 2;
void setup() {
pinMode(cny_LED, OUTPUT);
digitalWrite(cny_LED,HIGH);
Serial.begin(9600);
 
}
void loop() {
 
p=analogRead(A1);
Serial.println(p);
delay(200);
}