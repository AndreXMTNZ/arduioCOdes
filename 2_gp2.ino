/*
  Ejercicio uno, para el siguiente programa 
  implemente una función que recibirá los 
  valores capturados
  (comunicación UART), que corresponden a 
  número de veces que se encenderá y 
  apagara un led, y el
  otro valor que corresponde al tiempo entre apagado y encendido del led. 
*/

#define led 13
  
void setup() {
 pinMode(led, OUTPUT);
 Serial.begin(9600);
 Serial.println("Ingrese 2 valores numericos diferentes de cero");
 Serial.println("Veces que se encedera y apagara el led");
 delay(75);
 Serial.println("Retardo de encendido y apagado del led");
 delay(75);
 Serial.println("");
}

void loop() {
  Serial.println("Ingrese un numero entre 1 y 10");
  while(Serial.available() == 0){}
  int repe = Serial.parseInt();
  Serial.println(repe);

  Serial.println("Ingrese un numero entre 100 y 5000");
  while(Serial.available() == 0){}
  int tiempo = Serial.parseInt();
  Serial.println(tiempo);
  delay(700);
}
