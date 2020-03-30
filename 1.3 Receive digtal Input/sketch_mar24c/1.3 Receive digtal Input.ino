// initializing pin
int led=13;
int input= 3;
int state; // for storing input values

void setup() {
  // put your setup code here, to run once:
 pinMode(led,OUTPUT);
 pinMode(input,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
state= digitalRead(3);
digitalWrite(led,state);
}
