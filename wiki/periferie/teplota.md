# DHT11

Čidlo DHT11 je malé zařízení, které měří teplotu a vlhkost vzduchu. Je to velmi užitečné pro mnoho projektů, jako jsou například domácí automatizace, robotika a meteorologické stanice.

Čidlo DHT11 obsahuje senzor pro měření teploty a vlhkosti vzduchu. Je to velmi malé a lehké, takže jej můžete snadno integrovat do svých projektů. Senzor je velmi citlivý, takže může měřit velmi malé změny teploty a vlhkosti.

Čidlo DHT11 komunikuje se mikrokontroléry, jako je Arduino, pomocí jednoduchého sériového protokolu. To znamená, že je snadné jej integrovat do svých projektů a získat data o teplotě a vlhkosti.

Použití čidla DHT11 s Arduinem je velmi snadné. Stačí připojit čidlo k Arduinu a napsat program, který bude číst data z čidla. Program můžete napsat pomocí knihovny DHT, která je dostupná pro Arduino.

Zde je příklad programu, který čte data z čidla DHT11:


``` cpp
#include <DHT.h>

#define DHT_PIN 2
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  int teplota = dht.readTemperature();
  int vlhkost = dht.readHumidity();

  Serial.print("Teplota: ");
  Serial.print(teplota);
  Serial.println(" °C");

  Serial.print("Vlhkost: ");
  Serial.print(vlhkost);
  Serial.println(" %");

  delay(1000);
}
```


Tento program čte data z čidla DHT11 a tiskne je na sériový monitor.



#### Zdroje

* Obrázek [https://electrosome.com/wp-content/uploads/2014/10/dht-11.png](https://electrosome.com/wp-content/uploads/2014/10/dht-11.png)
