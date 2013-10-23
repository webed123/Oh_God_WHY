int red1Pin = 7;  
int red2Pin = 6;   
int grnoPin = 5;   
int grn2Pin = 4;   
int blu1Pin = 3;   
int blu2Pin = 2;   


void setup()
{
  pinMode(red1Pin, OUTPUT);   
  pinMode(red2Pin, OUTPUT);
  pinMode(grnoPin, OUTPUT);
  pinMode(grn2Pin, OUTPUT);
  pinMode(blu1Pin, OUTPUT);
  pinMode(blu2Pin, OUTPUT);
              
}

int temperatureC = 30 ;

void loop()            
{


 if(temperatureC >= 30)
 {
    digitalWrite(red1Pin, HIGH);
    digitalWrite(red2Pin, HIGH);
    digitalWrite(grnoPin, HIGH);
    digitalWrite(grn2Pin, HIGH);
    digitalWrite(blu1Pin, HIGH);
    digitalWrite(blu2Pin, HIGH);

 }

if((temperatureC <= 29.9) && (temperatureC >= 25))
 {
    digitalWrite(red1Pin, LOW);
    digitalWrite(red2Pin, HIGH);
    digitalWrite(grnoPin, HIGH);
    digitalWrite(grn2Pin, HIGH);
    digitalWrite(blu1Pin, HIGH);
    digitalWrite(blu2Pin, HIGH);

 }

if((temperatureC <= 24.9) && (temperatureC >= 20))
 {
    digitalWrite(red1Pin, LOW);
    digitalWrite(red2Pin, LOW);
    digitalWrite(grnoPin, HIGH);
    digitalWrite(grn2Pin, HIGH);
    digitalWrite(blu1Pin, HIGH);
    digitalWrite(blu2Pin, HIGH);

 }

if((temperatureC <= 19.9) && (temperatureC >= 15))
 {
    digitalWrite(red1Pin, LOW);
    digitalWrite(red2Pin, LOW);
    digitalWrite(grnoPin, LOW);
    digitalWrite(grn2Pin, HIGH);
    digitalWrite(blu1Pin, HIGH);
    digitalWrite(blu2Pin, HIGH);

 }

if((temperatureC <= 14.9) && (temperatureC >= 10))
 {
    digitalWrite(red1Pin, LOW);
    digitalWrite(red2Pin, LOW);
    digitalWrite(grnoPin, LOW);
    digitalWrite(grn2Pin, LOW);
    digitalWrite(blu1Pin, HIGH);
    digitalWrite(blu2Pin, HIGH);

 }

if((temperatureC <= 9.9) && (temperatureC >= 0))
 {
    digitalWrite(red1Pin, LOW);
    digitalWrite(red2Pin, LOW);
    digitalWrite(grnoPin, LOW);
    digitalWrite(grn2Pin, LOW);
    digitalWrite(blu1Pin, LOW);
    digitalWrite(blu2Pin, HIGH);

 } 


}
