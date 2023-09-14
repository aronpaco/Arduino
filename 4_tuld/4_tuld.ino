int buttonPin=7;
int potPin=A0;
int sees=-1;


void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  int buttonValue=digitalRead(buttonPin);
  if(buttonValue==LOW){
  	sees=sees*-1;
    Serial.println(sees);
    delay(1000);
  }
  if(sees==1){
  	int potValue=analogRead(potPin);
    int mappedValue=map(potValue,0,1023,0,4);
    Serial.println(mappedValue);
    if(mappedValue==0){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
    }
    if(mappedValue==1){
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
    }
    if(mappedValue==2){
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
    }
    if(mappedValue==3){
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
    }
    if(mappedValue==4){
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
    }
  }
  if(sees==-1){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
}