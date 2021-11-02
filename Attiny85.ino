
#include <SoftwareSerial.h>

SoftwareSerial mySerial(1,2);

void setup()
{
  mySerial.begin(9600);
  pinMode(3,INPUT);
}

void loop() // run over and over
{
   // mySerial.println("battery_voltage=90");
    //delay(60000*10);
    int x=analogRead(3);
    int z=map(x,0,552,0,100);
    mySerial.print("battery_voltage=");
    mySerial.println(z);
    delay(60000);
}
