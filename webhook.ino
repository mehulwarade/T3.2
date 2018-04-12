int led = D7;  // The on-board LED 

void setup() { 
  pinMode(led, OUTPUT); 
  Serial.begin(9600);
  Particle.function("MyFunction", Function);
 } 
 
 
 void loop() { 
    digitalWrite(led, HIGH);   // Turn ON the LED 
    String Randvalue = String(random(60, 80));
    int val = Function(Randvalue);
    Serial.printlnf("The random value id: %d" ,val);
    delay(600);               // Wait for 60 seconds 
    digitalWrite(led, LOW);    // Turn OFF the LED 
    delay(600);               // Wait for 60 seconds 
 } 
 
int Function(String value){
  int z = atoi(value);   //Converting string to int
  return z;
}
