//Sensores
const int sv = 2;
const int sll = 3;
const int sb = 4;

//Indicadores
int vacio = 5;
int llenado = 6;
int lleno = 7;
int rebose = 8;
int alarma = 9;
int b1 = 10;
int b2 = 11;

void setup() {
  // put your setup code here, to run once:
  //Sensores
  pinMode(sv, INPUT);
  pinMode(sll, INPUT);
  pinMode(sb, INPUT);

  //Indicadores
  pinMode(vacio, OUTPUT);
  pinMode(llenado, OUTPUT);
  pinMode(lleno, OUTPUT);
  pinMode(rebose, OUTPUT);
  pinMode(alarma, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Sensores
  digitalRead(sv);
  digitalRead(sll);
  digitalRead(sb);

  //PARTE 1
  if(digitalRead(sv) == HIGH && digitalRead(sll) == HIGH && digitalRead(sb) == HIGH){
    digitalWrite(vacio, HIGH);
    digitalWrite(llenado, LOW);
    digitalWrite(lleno, LOW);
    digitalWrite(rebose, LOW);
    digitalWrite(alarma, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
  }

  //PARTE 2
  else if(digitalRead(sv) == LOW && digitalRead(sll) == HIGH && digitalRead(sb) == HIGH){
    digitalWrite(llenado, HIGH);
    digitalWrite(vacio, LOW);
    digitalWrite(lleno, LOW);
    digitalWrite(rebose, LOW);
    digitalWrite(alarma, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
  }
  
  //PARTE 3
  else if(digitalRead(sv) == LOW && digitalRead(sll) == LOW && digitalRead(sb) == HIGH){
    digitalWrite(llenado, LOW);
    digitalWrite(vacio, LOW);
    digitalWrite(lleno, HIGH);
    digitalWrite(rebose, LOW);
    digitalWrite(alarma, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
  }

  //PARTE 4
  else if(digitalRead(sv) == LOW && digitalRead(sll) == LOW && digitalRead(sb) == LOW){
    digitalWrite(llenado, LOW);
    digitalWrite(vacio, LOW);
    digitalWrite(lleno, LOW);
    digitalWrite(rebose, HIGH);
    digitalWrite(alarma, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
  }

  //ERRORES
  else if(digitalRead(sv) == HIGH && digitalRead(sll) == HIGH && digitalRead(sb) == LOW){
    digitalWrite(llenado, LOW);
    digitalWrite(vacio, LOW);
    digitalWrite(lleno, LOW);
    digitalWrite(rebose, LOW);
    digitalWrite(alarma, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
  }

  else if(digitalRead(sv) == HIGH && digitalRead(sll) == LOW && digitalRead(sb) == HIGH){
    digitalWrite(llenado, LOW);
    digitalWrite(vacio, LOW);
    digitalWrite(lleno, LOW);
    digitalWrite(rebose, LOW);
    digitalWrite(alarma, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
  }
  
  else if(digitalRead(sv) == HIGH && digitalRead(sll) == LOW && digitalRead(sb) == LOW){
    digitalWrite(llenado, LOW);
    digitalWrite(vacio, LOW);
    digitalWrite(lleno, LOW);
    digitalWrite(rebose, LOW);
    digitalWrite(alarma, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
  }

  /*else{
    digitalWrite(llenado, LOW);
    digitalWrite(vacio, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(alarma, HIGH);
  }*/

}
