int pir1 = 2;
int pir2 = 4;
int IR1 = 6;
int IR2 = 7;
int Lamp= 8;
int Buz= 9;

void setup()
{
  Serial.begin(9600);
  pinMode(Lamp, OUTPUT);
  pinMode(Buz, OUTPUT);
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  pinMode(IR1 , INPUT);
  pinMode(IR2 , INPUT);
  
  digitalWrite(Lamp, LOW); //initially lamp remains off
  digitalWrite(Buz, LOW); //initially buz remains off  
}


void loop()
{
     if((digitalRead (pir1)==LOW) && (digitalRead (pir2)==LOW) && ((digitalRead (IR1)==HIGH)||(digitalRead (IR2)==HIGH) ))
          {
             digitalWrite(Lamp, HIGH);
             delay(1000);
             
             if(digitalRead (pir2)==HIGH)
                 {
                     digitalWrite(Buz, LOW);
                 }
             else
                 {
                   digitalWrite(Buz, HIGH);
                 }
           }
           
     else if ((digitalRead (pir1)==LOW) && (digitalRead (pir2)==HIGH) && ((digitalRead (IR1)==LOW)||(digitalRead (IR2)==LOW)) )
           {
             digitalWrite(Lamp, HIGH);
             
             digitalWrite(Buz, LOW);
           }
     
     else if ((digitalRead (pir1)==LOW) && (digitalRead (pir2)==HIGH) && ((digitalRead (IR1)==HIGH)||(digitalRead (IR2)==HIGH) ))
           {
             digitalWrite(Lamp, HIGH);
             
             digitalWrite(Buz, LOW);
           }
     
    else if ((digitalRead (pir1)==HIGH) && (digitalRead (pir2)==LOW) && ((digitalRead (IR1)==LOW)||(digitalRead (IR2)==LOW)) )
           {
             digitalWrite(Lamp, HIGH);
             
             digitalWrite(Buz, LOW);
           }
           
     else if ((digitalRead (pir1)==HIGH) && (digitalRead (pir2)==LOW) && ((digitalRead (IR1)==HIGH)||(digitalRead (IR2)==HIGH)) )
           {
             digitalWrite(Lamp, HIGH);
             delay(1000);
             
             if(digitalRead (pir2)==HIGH)
                 {
                     digitalWrite(Buz, LOW);
                 }
             else
                 {
                   digitalWrite(Buz, HIGH);
                 }
           }
     
     else if ((digitalRead (pir1)==HIGH) && (digitalRead (pir2)==HIGH) && ((digitalRead (IR1)==LOW)||(digitalRead (IR2)==LOW)) )
           {
             digitalWrite(Lamp, HIGH);
             
             digitalWrite(Buz, LOW);
           }
     
     else if ((digitalRead (pir1)==HIGH) && (digitalRead (pir2)==HIGH) && ((digitalRead (IR1)==HIGH)||(digitalRead (IR2)==HIGH) ))
           {
             digitalWrite(Lamp, HIGH);
             
             digitalWrite(Buz, LOW);
           }
           
     
     else
           {
             digitalWrite(Lamp, LOW);
             
             digitalWrite(Buz, LOW);
           }  
}

  
    
      
  


