

void setup(){
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop(){

  for(int X = 0; X <= 300; X = X + 5){
    analogWrite(6, X);
    Serial.println(X);
    delay(30);   
  }

  for(int X = 300; X >= 0; X = X - 5){
    analogWrite(6, X);
    Serial.println(X);
    delay(30);   
  }
}
