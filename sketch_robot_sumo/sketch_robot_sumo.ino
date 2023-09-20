//PROGRAMA ENTERO
int in1 = 3, in2 = 4, in3 = 5, in4 = 6;
int enable1 = 10, enable2 = 11;
int distancia;
int tiempo;
int TRIGGER = 9, ECHO = 8;
int luz;
int cny_LED = 2;


void setup()
{
pinMode(cny_LED, OUTPUT); 
digitalWrite(cny_LED,HIGH);//Enciende el LED IR embebido en el CNY70

pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
analogWrite(enable1, 90);
analogWrite(enable2, 70);
Serial.begin(9600);
pinMode(TRIGGER, OUTPUT); /*activación del pin 9 como salida: para el pulso ultrasónico*/
pinMode(ECHO, INPUT); /*activación del pin 8 como entrada: tiempo del rebote del ultrasonido*/
}
void loop()

{
do {
derecha();
delay(200);
distancia=distancia_medida();
} while (distancia>=10);
do {
adelante();
luz = analogRead(A1);
distancia = distancia_medida();
//Serial.println(luz);
delay(80);
} while (luz>900 || distancia<=10);
detener();
delay(1000);
izquierda();
delay(800);
adelante();
delay(300);
detener();
delay(2000);
/*
if(luz>0 && luz<180){
Serial.println(“blanco”);
}
else {
Serial.println(“negro”);
}
*/
}
int distancia_medida() {
digitalWrite(TRIGGER, LOW);
delayMicroseconds(2);
digitalWrite(TRIGGER, HIGH);
delayMicroseconds(10);
digitalWrite(TRIGGER, LOW);
// Calcula la distancia midiendo el tiempo del estado alto del pin ECHO
tiempo = pulseIn(ECHO, HIGH);
// La velocidad del sonido es de 340m/s o 29 microsegundos por centimetro
distancia = tiempo / 58;
//manda la distancia al monitor serie
/*
Serial.print(distancia);
Serial.println(“cm”);
delay(100);*/
Serial.println(distancia);
Serial.println("cm");
return distancia;
}
void detener() {
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
}
void izquierda() {
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
}
void derecha() {
digitalWrite(in2, HIGH);
digitalWrite(in1, LOW);
digitalWrite(in4, HIGH);
digitalWrite(in3, LOW);
}
void adelante() {
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in4, HIGH);
digitalWrite(in3, LOW);
}
void atras() {
digitalWrite(in2, HIGH);
digitalWrite(in1, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
}