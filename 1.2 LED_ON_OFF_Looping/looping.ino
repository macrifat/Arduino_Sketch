int m,n;

void setup() {
  // put your setup code here, to run once:
 for(m=0;m<=7;m++)
 {
  pinMode(m,OUTPUT);
 }
 }


void loop() {
  // put your main code here, to run repeatedly:
for(n=0;n<=7; n++)
{
  digitalWrite(n,HIGH);
  delay(100);
  digitalWrite(n,LOW);
  
}
}
