void setup() {
  Serial.begin(9600);//Iniciar comunicacion serial
}

/* Funcion de calculo */
void multiplos(int x){
  if(x > 0){
    int z;  
    z = x * 20; 
    Serial.println("El valor de z es:"); 
    Serial.println(z); 
    for(int w = 0; w < z; z = z - x){ 
      Serial.println("El valor de z es:"); 
      Serial.println(z);//Impresion de multiplos
      delay(200);
 }
}
void loop();
}

/* Captura de datos */
void loop() {
  int x;
  Serial.println("Ingrese el numero");
  while(Serial.available()==0){} 
  x = Serial.parseInt(); //Datos
  Serial.println(x); 
  multiplos(x);//Llamada de funcion
}
