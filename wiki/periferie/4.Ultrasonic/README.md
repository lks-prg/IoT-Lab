# Ultrasonický senzor

Čidlo HC-SR04 je ultrazvukové čidlo, které měří vzdálenost objektů. Je to velmi užitečné pro mnoho projektů, jako jsou například robotika, automatizace a bezpečnostní systémy.

Čidlo HC-SR04 obsahuje ultrazvukový vysílač a přijímač. Vysílač emituje ultrazvukové signály, které se odrážejí od objektů a přijímač je detekuje. Čidlo poté vypočítá vzdálenost objektu na základě času, který uplynul mezi vysláním a přijetím signálu.

Čidlo HC-SR04 komunikuje se mikrokontroléry, jako je Arduino, pomocí jednoduchého sériového protokolu. To znamená, že je snadné jej integrovat do svých projektů a získat data o vzdálenosti.

Použití čidla HC-SR04 s Arduinem je velmi snadné. Stačí připojit čidlo k Arduinu a napsat program, který bude číst data z čidla. Program můžete napsat pomocí knihovny NewPing, která je dostupná pro Arduino.

Zde je příklad programu, který čte data z čidla HC-SR04:

``` cpp
#include <NewPing.h> 

#define TRIGGER_PIN 2 #<--Zde vložte pin na který jste propojili s trigger pinem
#define ECHO_PIN 3 #<--Zde vložte pin na který jste propojili s echo pinem
#define MAX_DISTANCE 200 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup() {   
	Serial.begin(9600); 
} 
void loop() {   
	int vzdalenost = sonar.ping_cm();
	Serial.print("Vzdálenost: ");
	Serial.print(vzdalenost); 
	Serial.println(" cm");   
	delay(1000); 
}
```

Tento program čte data z čidla HC-SR04 a tiskne je na sériový monitor.

#### Zdroje

- [LaskaKit.cz](https://www.laskakit.cz/arduino-ultrazvukovy-meric-vzdalenosti-hc-sr04/)
- [Datasheet](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf)
- [Arduino Projects](https://projecthub.arduino.cc/Isaac100/7cabe1ec-70a7-4bf8-a239-325b49b53cd4)