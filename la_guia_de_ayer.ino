#include <LiquidCrystal.h>  //Libreria para que la lcd funcione 
LiquidCrystal lcd(1,2,4,5,6,7); //Ingrese los pines del arduino con el cual funcionara la LCD ademas de crear un objeto LCD (rs, enable, d4, d5, d6 y d7)

void setup() {

  
lcd.begin(16,2); //Iniciar la pantalla detallando el numero de filas y columnas  

lcd.setCursor(3,0); //Mando la señal que el siguiente mensaje vaya a la fila 0 y la columa 1
lcd.write("LUMINOSIDAD"); //Aparece un mensaje en la LCD fijo

 lcd.setCursor(9,1); //Mando la señal que el siguiente mensaje vaya a la fila 0 y la columa 1
lcd.write("%"); //Aparece un mensaje en la LCD fijo
}

void p1(float lectura){
  
float voltaje1 = lectura*5./1023; //Guardamos los datos de la operacion realizada en una variable tipo float llamada "voltaje1"

lcd.setCursor(0,1); //Mando la señal que el siguiente mensaje vaya a la fila 11 y la columa 1
lcd.print(voltaje1); //Imprimimos en la LCD el valor decimal que se guarda en la variable llamada "voltaje2" 
delay(500); //Realizamos un delay para tomar los datos de la mejor manera

int porcentaje=100/4.8*voltaje1;

lcd.setCursor(7,1); //Mando la señal que el siguiente mensaje vaya a la fila 11 y la columa 1
lcd.print(porcentaje); //Imprimimos en la LCD el valor decimal que se guarda en la variable llamada "voltaje2" 
delay(300); //Realizamos un delay para tomar los datos de la mejor manera
 
}
void loop() {//Programa principal
float lectura= analogRead(A0); //Indico que lo que se lea en el pin A0 se guarde en la variable
p1(lectura);//Llamamos a la funcion "lectura" y enviamos los parametros al programa secundario




}
