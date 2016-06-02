#include <ESP8266WiFi.h>

const char* ssids[] = {"Never gonna give you up","Never gonna let you down","Never gonna run around", "and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie","and hurt you"};
const char* pass = "pass_goes_here";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int currentssidno = 0;
  while (true)
  {
    const char* ssid = ssids[currentssidno];
    Serial.print("SSID: ");
    Serial.println(ssid);
    WiFi.softAP(ssid, pass);
    delay(5000);
    WiFi.softAPdisconnect(false);
    currentssidno = currentssidno + 1;
    if (currentssidno == 8) //please change this count if you change the amount of ssids
    {
      currentssidno = 0;
    }
  }
}

void loop() {
}
