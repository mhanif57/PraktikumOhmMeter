float V2,V1;
float R1= 100;
float R2;
float Rtot;
float adc;
float i;

void setup()
{
Serial.begin(9600);
}

void loop()
{
  adc= analogRead(A0);
  
  if (adc)
  {
    Serial.println("-----------------WELCOME-----------------");
    Serial.println("--CALCULATE VALUE R2 WITH ARDUINO NILAI--\n");

    
    V2=(adc*5)/1023;
    /* Serial.print("V2 = ");
    Serial.print(V2);
    Serial.print(" Volt\n");*/
    
    V1= 5-V2;
    /*Serial.print("V1 = ");
    Serial.print(V1);
    Serial.print(" Volt\n");*/
    
    i=(5-V2)/R1;
    Serial.print("i  = ");
    Serial.print(i);
    Serial.print(" A\n");

    R2= V2/i;
    Serial.print("R2 = ");
    Serial.print(R2);
    Serial.print(" Ohm\n\n\n");

       
    /* R2= (V2*R1)/(5-V2);
    Serial.print("R2 = ");
    Serial.println(R2);*/

    Rtot= R1+R2;
    /* Serial.print("Rtot = ");
    Serial.print(Rtot);
    Serial.print(" Ohm\n\n");*/
    
    delay(1000);
  }
  

}
