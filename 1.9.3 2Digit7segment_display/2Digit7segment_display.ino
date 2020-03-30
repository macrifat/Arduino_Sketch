int digit[10][7] = {
  {1,1,1,1,1,1,0},// for displaying 0
  {0,1,1,0,0,0,0},// for displaying 1
  {1,1,0,1,1,0,1},//for displaying 2
  {1,1,1,1,0,0,1},//for displaying 3
  {0,1,1,0,0,1,1},//for displaying 4
  {1,0,1,1,0,1,1},//for displaying 5
  {1,0,1,1,1,1,1},//for displaying 6
  {1,1,1,0,0,0,0},//for displaying 7
  {1,1,1,1,1,1,1},//for displaying 8
  {1,1,1,1,0,1,1} //for displaying 9
  
  };
void setup() {
  // put your setup code here, to run once:
   for (int i=0; i<=8;i++)
   {  
    pinMode(i, OUTPUT); // initializing pin 0-8
   }
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int count=25;
  digitalWrite(7,LOW);// diplay 1 power ON
  for( int j=0;j<=6;j++)
  {
    digitalWrite(j,digit[count/10][j]);
  }
  delay(50);
  digitalWrite(7,HIGH); // display 1 OFF
  
  digitalWrite(8,LOW); // display 2 ON
  
  for (int k=0;k<=6;k++)
  {
    digitalWrite(k, digit[count%10][k]);
  }
  delay(50);
  }
  
