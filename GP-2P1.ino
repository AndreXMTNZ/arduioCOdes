void setup() {
  Serial.begin(9600);//Iniciar comunicacion serial
  /* Impresion de texto */
  Serial.println("ingrese por medio de su teclado dos valores numericos diferentes de cero");
  Serial.println("el primer que corresponde al numero de veces que se encendera y apagara un led");
  Serial.println("el segundo que corresponde al retardo que existe entre encendido y apagado");
  Serial.println("");
}

/* Funcion */
void modular (int repe,int tiempo){
#define led 13 //Definir led
pinMode(led, OUTPUT);//Configuracion de pin
for(int x = 0; x < repe;x++){
  digitalWrite(led, HIGH);
  delay(tiempo);
  digitalWrite(led, LOW);
  delay(tiempo);
}
}

/* Captura de datos */
/* Veces que encendera el led */
void loop() {
  Serial.println("ingrese un numero entre 1 y 10");
  while(Serial.available() == 0){}
  int repe = Serial.parseInt();
  delay(2000);
  Serial.println(repe);
  delay(1000);

  /* Tiempo de encendido y apagado del led */
  Serial.println("ingrese un numero entre 100 y 5000");
  while(Serial.available() == 0){}
  int tiempo = Serial.parseInt();
  delay(2000);
  Serial.println(tiempo);
  delay(1000);

modular(repe, tiempo);//Llamada de funcion

}
