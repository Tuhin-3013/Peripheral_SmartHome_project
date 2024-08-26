char data = 0;
const int ledPin = 13;   
const int  ldrPin = A0;                
void setup() 
{
Serial.begin(9600);        
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT); 
pinMode(ledPin, OUTPUT);  
pinMode(ldrPin,  INPUT);       
}
void loop()
{
if(Serial.available() > 0)  
{
data = Serial.read();      
Serial.print(data);        
Serial.print("\n");        
if(data == 'A')             
digitalWrite(2, HIGH);  
else if(data == 'a')     
digitalWrite(2, LOW); 

  if(data == 'B')             
digitalWrite(3, HIGH);  
else if(data == 'b')     
digitalWrite(3, LOW);

if(data == 'C')             
digitalWrite(4, HIGH);  
else if(data == 'c')     
digitalWrite(4, LOW);

if(data == 'D')             
digitalWrite(5, HIGH);  
else if(data == 'd')     
digitalWrite(5, LOW);
} 
int  ldrStatus = analogRead(ldrPin); 
Serial.println(ldrStatus);                          
 if (ldrStatus >=550) {

    digitalWrite(ledPin,  HIGH);             

   }
  else {

    digitalWrite(ledPin,  LOW);
}
}