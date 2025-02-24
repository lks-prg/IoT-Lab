# Tlačítko


Tlačítko je základní periferií pro Arduino, která umožňuje uživatelům interagovat s projektem. Jednoduše řečeno, tlačítko je přepínač, který mění stav z "stisknuto" na "nestisknuto" nebo naopak, lépe řečeno stavy 0 nebo 1.

Tlačítko je velmi užitečné pro různé projekty, jako jsou například ovládání LED diod, displejů nebo dokonce malých robotů. Je to také skvělý způsob, jak začít s programováním a experimentováním s Arduinem.

## Programování

Tlačítko se obvykle zapojuje do digitálního vstupu na Arduino desce a pomocí programu lze detekovat, zda je tlačítko stisknuto nebo ne. Když je tlačítko stisknuto, Arduino obdrží signál a může reagovat podle programu.

### Ukázka funkčnosti

Pokud otevřeme Arduino IDE a nahrajeme tento kód.

```cpp
const int tlacitkoPin = 2; // Pin na arduino, kam je tlačítko připojeno
int stav = 0; // Proměnná pro uchování stavu tlačítka

void setup() {

  pinMode(tlacitkoPin, INPUT);

  Serial.begin(9600); // Nastavení sériové komunikace 
}

void loop() {

  stav = digitalRead(tlacitkoPin); // Čtení stavu zápisování do proměné stav

  Serial.println(stav); // Odeslání stavu přes sériovou linku

  delay(100); // Zpoždění pro snížení frekvence čtení

}
```

A otevřeme si Serial line (viz. obrázek), která nám pomáhá vypisovat komunikaci přes USB, což nám velmi pomáhá při debugingu. 
![[serial-line.png]]
![[Serial-line-vyber.png]]

Můžeme si všimnout, že Arduino vypisuje jedničky, to je amatérsky řečeno stav NESTIŠTĚNO.
Pokud zmáčkneme tlačítko mělo by se stav přepnout na 0 neboli STIŠTĚNO.

![[serial-line-stisknuto.png]]


