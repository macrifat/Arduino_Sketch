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

  for (int i =0; i<=8; i++)
  {
  pinMode(i, OUTPUT);
  }
  // this is a common cathode display
  digitalWrite(7,HIGH); // display initialy off
  digitalWrite(8,HIGH); // display initialy off

}

void loop() {
  // put your main code here, to run repeatedly:
    int temp= analogRead(A0); // taking input data by A0 pin
    int cel = (0.48828 *temp);

    for(int l=0;l<=50;l++)
    {
    digitalWrite(7,LOW); // turn ON display one

    for(int j=0; j<=6; j++)
    {
      digitalWrite( j, digit[cel/10][j]); // displaying first digit
    }
    delay(10);
    digitalWrite(7,HIGH); // turn off display one

    
    digitalWrite(8,LOW); // turning on dispplay 2

     for(int k=0; k<=6; k++)
    {
      digitalWrite( k, digit[cel%10][k]);// displaying 2nd digit
    }
    delay(10);
    digitalWrite(8,HIGH); // turn off display two



    
    }
    
}
