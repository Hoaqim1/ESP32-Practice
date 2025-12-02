#include <WiFi.h>

const char* ssid = "STI Student";
const char* password = "********";

void initWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  Serial.print("Connecting to wifi");

  while (!WiFi.isConnected()) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println();
  Serial.println(WiFi.SSID());
}

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

  initWiFi();

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(500);
}