int toprak_nem_degeri=0;//nem değeri için değişken
int nem_esik_degeri=30;
#define sensor_pin 0
#define motor_pin 13
void setup() {
 pinMode(motor_pin,OUTPUT);

}

void loop() {
 toprak_nem_degeri=map(analogRead(sensor_pin),0,1023,0,100);

 if (toprak_nem_degeri<nem_esik_degeri){
  digitalWrite(motor_pin,HIGH);
  delay(2000);
 }
  digitalWrite(motor_pin,LOW);
}
