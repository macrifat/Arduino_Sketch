int digit[10][7]={
  {1,1,1,1,1,1,0},//0
  {0,1,1,0,0,0,0},//1
  {1,1,0,1,1,0,1},//2
  {1,1,1,1,0,0,1},//3
  {0,1,1,0,0,1,1},//4
  {1,0,1,1,0,1,1},//5
  {1,0,1,1,1,1,1},//6
  {1,1,1,0,0,0,0},//7
  {1,1,1,1,1,1,1},//8
  {1,1,1,1,0,1,1}//9
  };
void setup() {
  // put your setup code here, to run once:
 for (int i=1; i<=7;i++)
 {
pinMode(i,OUTPUT);
 }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int j=0;j<=9;j++)
  {
    for(int k=0;k<=6;k++)
    {
      digitalWrite(k+1,digit[j][k]);
    }
    delay (300);
    }
  }
