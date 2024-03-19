// C++ code
//
int led=13;
int led2=12;
int led3=8;
int led4=9;
int led5=11;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
 
  
  digitalWrite(led5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(led4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(led2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
}