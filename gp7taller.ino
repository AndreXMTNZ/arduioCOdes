int tp1 = 2;
int tp2 = 0.20;
int tp3 = 0.25;
int tp4 = 0.30;
int tp5 = 0.35;
int tp6 = 0.40;

int led = 3;

int lectura;
float voltaje;
float temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogReference(EXTERNAL);//resistencia de 5k
}

void loop() {
  // put your main code here, to run repeatedly:
  lectura = analogRead(A0);
  Serial.println(lectura);
  delay(50);

  voltaje = lectura * 2.0/1023;
  temp = voltaje / 0.01;

  Serial.println(voltaje);
  Serial.println(temp);

   if(voltaje <= tp1){
   analogWrite(led, 42.5);
   }
   
   else if(voltaje <= tp2){
   analogWrite(led, 127.5);
   }
   
   else if(voltaje <= tp3){
   analogWrite(led, 135);//135
   }

   else if(voltaje <= tp4){
   analogWrite(led, 170);//170
   }

   else if (voltaje <= tp5){
   analogWrite(led, 212);//212
   }

   else if (voltaje <= tp6){
   analogWrite(led, 255);
   }
}
  
