void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4,OUTPUT);
}
  
 void forward()
 {
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
 }
  void backward()
 {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);  
  digitalWrite(7, HIGH);
  digitalWrite(4, LOW);
 }
  void left()
 {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);  
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
 }
  void right()
 {
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
 }
  void stop()
 {
  digitalWrite(13, LOW); 
  digitalWrite(12, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
 }

void loop()
{
 switch(Serial.read())
  {
  case'1':
     forward();
     break;
  case'2':
     backward();
     break;
  case'3':
     left();
     break;
  case'4':
     right();
     break;
  case'5':
     stop();
     break;
  default:
   break;
 }  
}
