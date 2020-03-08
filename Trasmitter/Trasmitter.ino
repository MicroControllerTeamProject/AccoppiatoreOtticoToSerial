
// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(600);
}
uint8_t count = 0;
// the loop function runs over and over again until power down or reset
void loop() {
	count++;
	if (count == 100) count = 0;
	if (count < 10) Serial.print('0');
	Serial.print(count);
	Serial.print("xx");
	Serial.print('*');
	delay(100);
	return;
	/*Serial.print("1899*");
	Serial.print("1899*");
	delay(100);
	Serial.print("1977*");
	delay(100);
	Serial.print("2075*");
	delay(100);*/
}
