int distancia;
int tiempo;
int TRIGGER=8,ECHO=9;
void setup(){
 Serial.begin(9600);
 pinMode(TRIGGER, OUTPUT); /*activación del pin 9 como salida: para el pulso ultrasónico*/
 pinMode(ECHO, INPUT); /*activación del pin 8 como entrada: tiempo del rebote del ultrasonido*/
}
void loop(){
 digitalWrite(TRIGGER, LOW);
 delayMicroseconds(2);
 digitalWrite(TRIGGER, HIGH);
 delayMicroseconds(10);
 digitalWrite(TRIGGER, LOW);
 // Calcula la distancia midiendo el tiempo del estado alto del pin ECHO
 tiempo = pulseIn(ECHO, HIGH);
 // La velocidad del sonido es de 340m/s o 29 microsegundos por centimetro
 distancia= tiempo/58;
 //manda la distancia al monitor serie
 if (distancia<0){
 distancia=50;
 }
 Serial.print(distancia);
 Serial.println(" cm");
 delay(100); 
 
 
}