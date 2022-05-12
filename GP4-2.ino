int led = 13;
int b1 = 2;
int b2 = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(led, OUTPUT);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalRead(b1);
  digitalRead(b2);
  
  /*if(digitalRead(b1) == LOW && digitalRead(b2) == LOW){
    digitalWrite(led, LOW);
    Serial.println("apagado");
    delay(50);
  }

  if(digitalRead(b1) == HIGH && digitalRead(b2) == LOW){
    digitalWrite(led, HIGH);
    Serial.println("encendido");
    Serial.println("boton 1");
    delay(50);
  }

  if(digitalRead(b1) == LOW && digitalRead(b2) == HIGH){
    digitalWrite(led, HIGH);
    Serial.println("encendido");
    Serial.println("boton 2");
    delay(50);
  }*/

  while(digitalRead(b1) == LOW && digitalRead(b2) == LOW){
    digitalWrite(led, LOW);
    Serial.println("apagado");
    delay(50);
  }

  while(digitalRead(b1) == HIGH && digitalRead(b2) == LOW){
    digitalWrite(led, HIGH);
    Serial.println("encendido");
    Serial.println("boton 1");
    delay(50);
  }

  while(digitalRead(b1) == LOW && digitalRead(b2) == HIGH){
    digitalWrite(led, HIGH);
    Serial.println("encendido");
    Serial.println("boton 2");
    delay(50);
  }

  while(digitalRead(b1) == HIGH && digitalRead(b2) == HIGH){
    digitalWrite(led, HIGH);
    Serial.println("encendido");
    Serial.println("botones 1 y 2");
    delay(50);
  }
}
