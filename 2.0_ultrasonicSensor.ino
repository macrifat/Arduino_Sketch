int trigpin= A0;
int echopin= A1;

void setup() {
  // put your setup code here, to run once:
pinMode( trigpin, OUTPUT);
pinMode(echopin, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite( trigpin,LOW); // initially making LOW
delay(2);
digitalWrite(trigpin,HIGH); // HIGH condition
delayMicroseconds(10); 
digitalWrite(trigpin,LOW); // Making LOW
float duration= pulseIn(echopin,HIGH); // counting time as long as trigpin HIGH

float distance= (duration*0.00034)/2 ;
Serial.print("the distance is = ");
Serial.print( distance);
Serial.print("m");
Serial.println();

delay(5000); 

}
