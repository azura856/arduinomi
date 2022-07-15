int r=10;
int g=9;
int b=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
    digitalWrite(r, HIGH);
    delay(3000);

    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);

    delay(3000);

    digitalWrite(g, LOW);
    digitalWrite(b, HIGH);

    delay(3000);

  
    digitalWrite(b, LOW);
    
    delay(3000);
}
