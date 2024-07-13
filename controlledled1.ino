void setup() {
  for( int led=8;led<=11;led++){
    pinMode(led,OUTPUT);
  }

}

void loop() {
  for(int led=8;led<=11;led++){
    digitalWrite(led,HIGH);
    delay(1000);
  }
  for(int led=11;led>=8;led--){
    digitalWrite(led,LOW);
    delay(1000);
  }

}
