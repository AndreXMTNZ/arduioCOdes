int g1=2;
int y1=3;
int r1=4;
int g2=5;
int y2=6;
int r2=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(g1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(r2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(g1,HIGH);
  digitalWrite(r2,HIGH);
  delay(9000);
  
  digitalWrite(g1,LOW);
  digitalWrite(y1,HIGH);
  digitalWrite(r2,HIGH);
  delay(3000);
  
  digitalWrite(g2,HIGH);
  digitalWrite(y1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(r1,HIGH);
  delay(9000);
  
  digitalWrite(g2,LOW);
  digitalWrite(y2,HIGH);
  digitalWrite(r1,HIGH);
  delay(3000);

  digitalWrite(g2,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(r1,LOW);
}
