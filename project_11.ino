int motorPwm=0; 

int s1 = 13; //switch
int s2 = 12; //switch
int s3 = 11;
int s4 = 8;

  
bool s1check; 
bool s2check; 
bool s3check; 
bool s4check; 


void setup()
{
pinMode(6,OUTPUT); //reverse for motor 1
pinMode(9, OUTPUT); //forward for motor 1
pinMode(10, OUTPUT); //forward for motor 2
pinMode(5, OUTPUT); //reverse for motor 2
  
pinMode(13, OUTPUT); 
pinMode(12, OUTPUT); 
pinMode(11, OUTPUT); 
pinMode(8, OUTPUT); 
}

void loop()
{
  s1check = digitalRead(s1); 
  s2check = digitalRead(s2);
  s3check = digitalRead(s3);
  s4check = digitalRead(s4);
  
    if (s1check == false && s2check == false && s3check == false && s4check == false){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
 	 digitalWrite (9, LOW); 
 	 digitalWrite(10, LOW);	
       	 digitalWrite(6, LOW);	
       	 digitalWrite(5, LOW);	
  }
  
  if (s1check == true && s2check == false && s3check == false && s4check == false){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
  
 	 analogWrite (9, motorPwm); 
 	 analogWrite(10, motorPwm); 
  }
  
    if (s1check == false && s2check == true && s3check == false && s4check == false){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
  
 	 analogWrite (6, motorPwm); 
 	 analogWrite(5, motorPwm); 
  }
  
      if (s1check == false && s2check == false && s3check == true && s4check == false){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
  
 	 analogWrite (9, motorPwm); 
 	 analogWrite(5, motorPwm); 
  }
  
      if (s1check == false && s2check == false && s3check == false && s4check == true){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
  
 	 analogWrite (6, motorPwm); 
 	 analogWrite(10, motorPwm); 
  }
 
  


  

  
}