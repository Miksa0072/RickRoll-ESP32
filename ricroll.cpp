#include <WiFi.h>

#define NUM_HOTSPOTS 5  

const char* ssid[] = {"01 Never gonna give you up", "02 Never gonna let you down", "03 Never gonna run around", "04 Never gonna make you cry", "05 Never gonna say goodbye"};  // Anna hotspottien nimet
const char* password = "salasana";  

void setup() {
  Serial.begin(115200);


  WiFi.mode(WIFI_AP);  
  delay(100);
  
  for (int i = 0; i < NUM_HOTSPOTS; i++) {
   
    boolean result = WiFi.softAP(ssid[i], password);
    if (result) {
      Serial.print("Hotspot ");
      Serial.print(ssid[i]);
      Serial.println(" Luonti Onnistui");
    } else {
      Serial.print("Hotspot ");
      Serial.print(ssid[i]);
      Serial.println(" luonti epäonnistui");
    }
  }
}

