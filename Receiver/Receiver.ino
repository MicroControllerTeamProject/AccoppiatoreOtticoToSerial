/*
 Name:		Receiver.ino
 Created:	3/8/2020 1:53:08 AM
 Author:	luigi.santagada
*/

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(600);
}

// the loop function runs over and over again until power down or reset
void loop() {
	if (Serial.available() > 0)
	{
		char response[4] = {};
		/*while (Serial.available() > 0) {
			response.concat((char)Serial.read());
		}*/
		Serial.readBytesUntil('*', response, 4);
		String e = response;
		e.trim();
		if (e != "")
		{
			Serial.println(e);
		}
	}

}
