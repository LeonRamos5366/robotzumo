int in1=13,in2=12,in3=11,in4=10;
int enable1=6,enable2=5;

//El programa hace que las ruedas se muevan hacia atras y adelante
void setup()
{
 pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
analogWrite(enable1, 255);
analogWrite(enable2, 255);
}
void loop()
{
 
 digitalWrite(in2, HIGH);
 digitalWrite(in1, LOW);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);
 delay(5000);
 digitalWrite(in2, LOW);
digitalWrite(in1, LOW);
 digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
delay(1000);
}