
#include <SoftwareSerial.h>

SoftwareSerial* softwareSerial = new SoftwareSerial(10, 3);

void setup() {
	softwareSerial->begin(600);
}
uint8_t count = 0;
// the loop function runs over and over again until power down or reset
void loop() {
	count++;
	if (count == 100) count = 0;
	if (count < 10) softwareSerial->print('0');
	softwareSerial->print(count);
	softwareSerial->print("xx");
	softwareSerial->print('*');
	delay(100);
}
