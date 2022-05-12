int l1=12;
int l2=11;
int l3=10;
int ex;

void setup(){
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
}

void loop(){

  if(Serial.available()>0){
    char a=Serial.read();

    if (a=='x'){
      digitalWrite(l1,HIGH);
      digitalWrite(l2,HIGH);
      digitalWrite(l3,HIGH);
      Serial.println("Luminaria encendida");

    }
    
      if(a=='y'){
      digitalWrite(l1,HIGH);
      delay(1000);
      digitalWrite(l1,LOW);
      
      digitalWrite(l2,HIGH);
      delay(1000);
      digitalWrite(l2,LOW);

      digitalWrite(l3,HIGH);
      delay(1000);
      digitalWrite(l3,LOW);
      
      Serial.println("Luminaria prueba");
      delay(50);
      }
     /* Serial.read();
      do{
        digitalWrite(l1,LOW);
      digitalWrite(l2,LOW);
      digitalWrite(l3,LOW);
      Serial.println("Luminaria apagada");
      }while(a=='0');
      }*/
    
    if (a=='0'){
      digitalWrite(l1,LOW);
      digitalWrite(l2,LOW);
      digitalWrite(l3,LOW);
      Serial.println("Luminaria apagada");

    }
    }
}
  
  
