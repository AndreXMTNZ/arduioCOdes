#include <Stepper.h>//Libreria de motor
#include <LiquidCrystal.h>//Libreria LCD

//cambio de orden de pines 9, 10 para evitar error de libreria
Stepper stepper_1(4096, 8, 10, 9, 11);
Stepper stepper_2(1024, 4, 6, 5, 7);

//Para LCD
int rs = 2;                     
int en = 3¿;
int d4 = 4;
int d5 = 5;
int d6 = 6;
int d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
/* VSS-, VCC+, V0/POT, RS/0, RW-, E/2, D4/4, D5/5, D6/6, D7/7, A+, K-* mkr/
 *  /* VSS-, VCC+, V0/POT, RS/2, RW-, E/3, D4/4, D5/5, D6/6, D7/7, A+, K- iot 33*/

/* TRIG/8, ECHO/9 */

// the previous reading from the analog input
int previous = 0;
const int b1_1 = 14;
const int b1_2 = 15;
const int b2_1 = 16;
const int b2_2 = 17;

int vp = 0;
int hp = 0;

void setup() {
  //estaba en 30 pero segun el video que esta en el classroom dice que solo se coloca los numeros
  //"1", "2", "3" de RPM para el motor 28BYJ-48
  stepper_1.setSpeed(3);
  stepper_2.setSpeed(3);
  
  lcd.begin(16, 2);  //INDICA EL NUMERO DE COLUMNAS Y RENGLONES

  pinMode(b1_1, INPUT);
  pinMode(b1_2, INPUT);
  pinMode(b2_1, INPUT);
  pinMode(b2_2, INPUT);

//abrimos relog para UART
Serial.begin(9600);
}

void loop() {
 int b1 = digitalRead(b1_1);
 int b2 = digitalRead(b1_2);
 int b3 = digitalRead(b2_1);
 int b4 = digitalRead(b2_2);

 //Suma vertical
 if(b1 == HIGH){
  vp++;
  
  if(vp >= 90){
    vp = 0;
  }
 }
 
 //REsta vertical
 if(b2 == HIGH){
  vp--;
  
  if(vp == 1){
    vp = 91;
  }
 }
 
 //Suma horizontal
 if(b3 == HIGH){
  hp++;
  
  if(hp >= 360){
    hp = 0;
  }
 }
 
 //REsta horizontal
 if(digitalRead(b2_2) == HIGH){
  hp--;
  
  if(hp == 1){
    hp = 361;
  }
 }

int ul = hp * 11.37777;
int ol = vp * 11.37777;

  lcd.setCursor(5,0);
  lcd.print("grados");
  lcd.setCursor(0,1);
  lcd.print(ol);
  lcd.setCursor(5,1);
  lcd.print(ul);
  Serial.println(ul);
  Serial.println(ol);
  delay(75);
//motor
    stepper_1.step(ol);
    stepper_2.step(ul);
}
