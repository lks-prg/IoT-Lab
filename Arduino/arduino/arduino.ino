#include <NewPing.h> 

#define TRIGGER_PIN 9 
#define ECHO_PIN 8 
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