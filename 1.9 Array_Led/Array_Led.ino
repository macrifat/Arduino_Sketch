int pinNumber[] ={1,3,6,7,10};
void setup() {
  // put your setup code here, to run once:
 for( int i=0;i<=4;i++)
 {
  pinMode(pinNumber[i],OUTPUT);
 }
 }


void loop() {
  // put your main code here, to run repeatedly:
  for( int j=0;j<=4;j++)
 {
 digitalWrite(pinNumber[j],HIGH);// led will be ON
  delay(300); // waiting 300ms
  digitalWrite(pinNumber[j],LOW);// led will be off
  delay(300); // waiting time 300ms
 }
}
