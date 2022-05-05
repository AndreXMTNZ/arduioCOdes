//Libreria LCD
#include <LiquidCrystal.h>

//Libreria IR
#include <IRremote.hpp>
#define NO_LED_FEEDBACK_CODE
#define IR_INPUT_PIN    2
  int rs = 0;                     
  int en = 1;
  int d4 = 4;
  int d5 = 5;
  int d6 = 6;
  int d7 = 7;
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  /* VSS-, VCC+, V0/POT, RS/0, RW-, E/2, D4/4, D5/5, D6/6, D7/7, A+, K-*/
  /* TRIG/8, ECHO/9 */
int p = 0;
void setup() {
 Serial.begin(9600);
  lcd.begin(20, 4);  //INDICA EL NUMERO DE COLUMNAS Y RENGLONES de LCD
  IrReceiver.begin(IR_INPUT_PIN, DISABLE_LED_FEEDBACK);
}

void loop() {

  //OFF
  while(p == 0){
  lcd.setCursor(5,1);
  lcd.print("OFF");
  IrReceiver.decodedIRData.decodedRawData = 0;

  if (IrReceiver.decode()) {
      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
      IrReceiver.resume(); 
      lcd.setCursor(0,5);
      lcd.print(IrReceiver.decodedIRData.decodedRawData, HEX);
      //inicio
      switch(IrReceiver.decodedIRData.decodedRawData){
      case 0xE916FF00:
      lcd.clear();
      p++;
      lcd.setCursor(2,1);
      lcd.print("Iniciando LCD"); 
      delay(1000);
      lcd.clear();
      IrReceiver.decodedIRData.decodedRawData = 0;
      break; 
      }
}
}
//parte 2
  while(p == 1){
  lcd.setCursor(5,1);
  lcd.print("ON");
  //apagado
  if (IrReceiver.decode()) {
  if(IrReceiver.decodedIRData.decodedRawData == 0xE916FF00){
    p--;
    lcd.setCursor(2,1);
    lcd.print("Apagando LCD"); 
    delay(1000);
    lcd.clear();
    IrReceiver.decodedIRData.decodedRawData = 0;
  }
  }
//accion

}
}
 
