#include <Arduino.h>

#include "..\lib/Settimino/Settimino.h"
#include "..\lib/Settimino/Platform.h"

char ssid[] = "SKYNET-AIR";    // Your network SSID (name)
char pass[] = "yourpassword";  // Your network password (if any)

IPAddress Local(192,168,0,10);  // Local Address
IPAddress Gateway(192, 168, 0, 1);
IPAddress Subnet(255, 255, 255, 0);

int DBNum = 100;
byte Buffer[512];

S7Client Client;
S7Helper h;




void setup() {


}

void loop() {

}




