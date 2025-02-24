const int tlacitkoPin = 2; // Pin, na kterém je tlačítko
int stav = 0; // Proměnná pro uchování stavu tlačítka

void setup() {
  pinMode(tlacitkoPin, INPUT);
  Serial.begin(9600); // Nastavení sériové komunikace
}

void loop() {
   stav = digitalRead(tlacitkoPin); // Čtení stavu tlačítka
  Serial.println(stav); // Odeslání stavu přes sériovou linku
  delay(100); // Zpoždění pro snížení frekvence čtení
}
