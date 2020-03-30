int digit[] = {1,1,1,1,0,0,1}; // for showing 3

void setup() {
  // put your setup code here, to run once:
for (int i=0; i<=7;i++)
{
 pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  
for(int j=0;j<=6;j++)
{
  digitalWrite(j+1,digit[j]);
}

}
