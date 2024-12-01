# Základní commandy

```cpp
// Tento program bude blikat LED diodou na pinu 13

// Funkce setup() se spustí jednou při startu programu
void setup() {
  // Nastavíme pin 13 jako výstup
  pinMode(13, OUTPUT);
}

// Funkce loop() se spustí opakovaně po celou dobu běhu programu
void loop() {
  // Zapneme LED diodu na pinu 13
  digitalWrite(13, HIGH);
  // Čekáme na 1 sekundu
  delay(1000);
  // Vypneme LED diodu na pinu 13
  digitalWrite(13, LOW);
  // Čekáme na 1 sekundu
  delay(1000);
}

// Tento program bude tisknout text na sériový port
void setup() {
  // Inicializujeme sériový port pro komunikaci s počítačem
  Serial.begin(9600);
}

void loop() {
  // Tiskneme text na sériový port
  Serial.println("Ahoj!");
  // Čekáme na 1 sekundu
  delay(1000);
}

```

* `pinMode(pin, MODE)`: nastavuje režim pinu (INPUT, OUTPUT, INPUT\_PULLUP), záleží podle použití. Pro senzory typu teploměr volíme INPUT a pro např. LED diody volíme OUTPUT.
* `digitalWrite(pin, stav)`: nastavuje stav digitálního pinu (HIGH nebo LOW)
* `delay(milisekundy)`: způsobí, že program čeká na určitou dobu (v milisekundách)
* `Serial.begin(baud)`: inicializuje sériový port pro komunikaci s počítačem
* `Serial.println(text)`: tiskne text na sériový port a přidá nový řádek
