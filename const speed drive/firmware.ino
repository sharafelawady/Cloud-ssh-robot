int data = 0;
int motor1dr = 4;
int motor1pw = 5;
int motor2dr = 6;
int motor2pw = 7;
void setup() {                
 
  pinMode(motor1dr,OUTPUT);
  pinMode(motor1pw,OUTPUT);
  pinMode(motor2dr,OUTPUT);
  pinMode(motor2pw,OUTPUT);

  Serial.begin(9600);  
 
}

void loop() {
  if(Serial.available()> 0){
    
  data = Serial.read();
  Serial.println(data);
  
  if( data == '1'){
    digitalWrite(motor1dr, LOW); 
    digitalWrite(motor2dr, LOW); 
    analogWrite(motor1pw,25);
    analogWrite(motor2pw,25);
    Serial.println("robot is moving forward");
    delay(1000);}
    
  else if( data == '2'){
    digitalWrite(motor1dr,HIGH); 
    digitalWrite(motor2dr, HIGH); 
    analogWrite(motor1pw,25);
    analogWrite(motor2pw,25); 
    Serial.println("robot is moving backward");
    delay(1000);}
    
  else if( data == '3'){
    digitalWrite(motor1dr,HIGH); 
    digitalWrite(motor2dr, HIGH); 
    analogWrite(motor1pw,0);
    analogWrite(motor2pw,0); 
    Serial.println("robot stop");}
    
  else if( data == '4'){
    digitalWrite(motor1dr,HIGH); 
    digitalWrite(motor2dr,LOW);
    analogWrite(motor1pw,75);
    analogWrite(motor2pw,75); 
    Serial.println("robot turn right");
    delay(1000);}
    
  else if( data == '5'){
    digitalWrite(motor1dr,LOW); 
    digitalWrite(motor2dr,HIGH);
    analogWrite(motor1pw,75);
    analogWrite(motor2pw,75); 
    Serial.println("robot turn left");
    delay(1000);}
    
  else if( data == '6'){
    digitalWrite(motor1dr,LOW); 
    digitalWrite(motor2dr, LOW); 
    analogWrite(motor1pw,100);
    analogWrite(motor2pw,10); 
    Serial.println("robot is moving forward 45 right");
    delay(1000);}
    
  else if( data == '7'){
    digitalWrite(motor1dr,LOW); 
    digitalWrite(motor2dr, LOW); 
    analogWrite(motor1pw,10);
    analogWrite(motor2pw,100); 
    Serial.println("robot is moving forward 45 left");
    delay(1000);}
    
  else if( data == '8'){
    digitalWrite(motor1dr,HIGH); 
    digitalWrite(motor2dr,HIGH); 
    analogWrite(motor1pw,100);
    analogWrite(motor2pw,10); 
    Serial.println("robot is moving backward 45 right");
    delay(1000);}
    
  else if( data == '9'){
    digitalWrite(motor1dr,HIGH); 
    digitalWrite(motor2dr,HIGH); 
    analogWrite(motor1pw,10);
    analogWrite(motor2pw,100); 
    Serial.println("robot is moving backward 45 left");
    delay(1000);}        
    
}
}  
