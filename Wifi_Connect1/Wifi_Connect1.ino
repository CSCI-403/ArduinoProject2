#include <WiFi.h>
 

const char* ssid       = "YOUR_SSID";
const char* password   = "YOUR_PASS";

 
void setup() {
 
  Serial.begin(115200);
   WiFi.disconnect();
    
    //delay(100);
    
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network");
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());         // Send the IP address of the ESP8266 to the computer

}

 
void loop() {
 
}

