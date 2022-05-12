int l1 = 5;
int l2 = 6;
int l3 = 7;
char x;
String tex;
int z;
long et;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("BITS");
  
  while(Serial.available()==0){}
  while(Serial.available()> 0){
    x = Serial.read();
    tex.concat(x);
    delay(10); 
  }
  
  //et = tex.toInt();
  Serial.println(tex);
  tex="";
  
  if (tex == 100){
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  }

  if (tex == 000){
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);   
  }
  
  if (tex == 010){
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(l3,LOW);
  }
}
