const int b1 = 2;
const int b2 = 3;
const int p = 4;
const int cu = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(p, INPUT);
  pinMode(cu, OUTPUT);
}

void loop() {
  // put yourdigitalRead(boton1);
  digitalRead(b1);
  digitalRead(b2);

    if(digitalRead(b1) == HIGH && digitalRead(b2)== HIGH && digitalRead(p)== HIGH){
    digitalWrite(cu, HIGH);
    
  }
  
  else{
    digitalWrite(cu,LOW);
     
  }
}
