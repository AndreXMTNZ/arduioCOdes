const int led = 13;
const int bt = 7;
int val = 0;
int st = 0;
int ol_val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(bt, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(bt);

  if((val == HIGH) && (ol_val == LOW)){
    st = 1 - st;
    delay(10);
  }

  ol_val = val;
  if (st == 1){
    digitalWrite(led, HIGH);
  }

  else{
    digitalWrite(led, LOW);
  }
}
