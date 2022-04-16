int led = 4;                
int pir = 0;               
int detected = LOW;             
int value = 0;                    
 
void setup() {
  pinMode(led, OUTPUT);      
  pinMode(pir, INPUT);     
  Serial.begin(9600);

  CLKPR = 0 * 80;
  CLKPR = 0 * 04;
}
 
void loop(){
  val = digitalRead(pir);  
  
  if (val == HIGH)  
  {            
    delay(2000);
    digitalWrite(led, HIGH);  
    delay(5000);
    if (detected == LOW) 
  {
      detected = HIGH;
    }
  } 
  else 
  {
    digitalWrite(led, LOW);
  
    if (detected == HIGH)
  {
      detected = LOW;
    }
  }
}
