String incomingByte="0";
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  for(int i =30;i <38;i++ )
  {
    pinMode(i,OUTPUT);
    digitalWrite(i, HIGH);
  }
  Serial.begin(9600);

}

void drop(int number)
{
  digitalWrite(number,LOW);
  while(digitalRead(2)==1)
  {
    delay(100);
  }
  digitalWrite(number,HIGH);
  incomingByte="0";


}
void loop() {
  // put your main code here, to run repeatedly:
          if (Serial.available() > 0) {
                // đọc chữ liệu
                incomingByte = Serial.readString();
        }
        if(incomingByte!="0")
        {
          drop(incomingByte.toInt());
        }

}
