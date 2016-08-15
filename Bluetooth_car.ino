
int m1=12;
int m2=10;
int m3=9;
int m4=8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()>0){
  char c = Serial.read();
  if(c=='1'){
    digitalWrite(m1,HIGH);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,HIGH);
    }
     if(c=='2'){
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
    }
     if(c=='3'){
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
    }
     if(c=='4'){
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
    }
  }
}
