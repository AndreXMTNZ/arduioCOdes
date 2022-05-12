int contador = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  contador = contador + 1;
  //contador = contador - 1; 
  // contador++; contador = contador + 1;
  // contador--; contador = contador - 1;

  Serial.print("contador = ");
  Serial.println(contador);
  delay(1000);
}
