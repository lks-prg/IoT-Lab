#include <OneWire.h>
#include <DallasTemperature.h>

const int teplomer_pin = 4;
OneWire oneWireDS(teplomer_pin); //Nastavení instance OneWire pro komunikaci s libovolnými zařízeními OneWire | Zkopírováno z Dratek.cz 
DallasTemperature senzoryDS(&oneWireDS); //Předává náš odkaz oneWire na Dallas Temperature. | Zkopírováno z Dratek.cz
float teplomer_teplota;

void setup() {
  Serial.begin(9600); // Nastavení sériové komunikace
  pinMode(13, OUTPUT); // Nastavení pinu 13 jako výstup
  senzoryDS.begin();

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n'); // Čtení příchozí zprávy až do nového řádku
    command.trim(); // Odstranění případných mezer na začátku a konci zprávy

    if (command == "led - on") {
      digitalWrite(13, HIGH); // Zapnutí pinu 13
    } else if (command == "led - off") {
      digitalWrite(13, LOW); // Vypnutí pinu 13
    }
  }

  // Odesílání teploty
  senzoryDS.requestTemperatures(); // žádost o načtení hodnoty
  teplomer_teplota = senzoryDS.getTempCByIndex(0); //naštení hodnoty do proměnné 
// Teploměr - série
   // Výpis teploty do sériez pinu A0
  Serial.println("Teplota - " + String(teplomer_teplota));
  delay(1000); // Odesílání teploty každou sekundu
}
