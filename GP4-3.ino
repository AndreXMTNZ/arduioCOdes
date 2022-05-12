#define b1 14
#define b2 15
#define led 13
int contador  = 0;  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int e1 = digitalRead(b1);
  int e2 = digitalRead(b2);
  
    if (e1 == HIGH){
      contador++;
      Serial.println(contador);
      delay(200);
      
      if(contador == 50){
      contador = 0;
    }
    } 
    
    if (e2 == HIGH){
      contador--;
      Serial.println(contador);
      delay(200);
      
      if(contador == 1){
      contador = 51;
    }
    }

    
    }
