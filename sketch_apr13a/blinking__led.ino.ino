//Blinking Led
const int L1=16, L2=17, L3=5, L4=18, L5=19, L6=21, L7=22, L8=23; //initializing 
//LED pins 
void setup() 
{ 
pinMode(L1, OUTPUT); // Set all Port P2 pins as output 
pinMode(L2, OUTPUT); 
pinMode(L3, OUTPUT); 
pinMode(L4, OUTPUT); 
pinMode(L5, OUTPUT); 
pinMode(L6, OUTPUT); 
pinMode(L7, OUTPUT); 
pinMode(L8, OUTPUT); 
} 
void loop() 
{ 
digitalWrite(L1, HIGH); 
digitalWrite(L2, HIGH); 
digitalWrite(L3, HIGH); 
digitalWrite(L4, HIGH); 
digitalWrite(L5, HIGH); 
digitalWrite(L6, HIGH); 
digitalWrite(L7, HIGH); 
digitalWrite(L8, HIGH); 
delay(2000); 
digitalWrite(L1, LOW); 
digitalWrite(L2, LOW); 
digitalWrite(L3, LOW); 
digitalWrite(L4, LOW); 
digitalWrite(L5, LOW); 
digitalWrite(L6, LOW); 
digitalWrite(L7, LOW); 
digitalWrite(L8, LOW); 
delay(2000); 
}