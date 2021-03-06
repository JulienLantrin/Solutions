int x = 0; // variable

void setup() {
Serial.begin(115200); // open the serial port at 9600 bps:
}

void loop() {
// print labels
Serial.print("NO FORMAT"); // prints a label
Serial.print("\t"); // prints a tab

Serial.print("DEC");
Serial.print("\t");

Serial.print("HEX");
Serial.print("\t");

Serial.print("OCT");
Serial.print("\t");

Serial.print("BIN");
Serial.print("\t");

for(x=0; 64; x++){ // only part of the ASCII chart, change to suit

// print it out in many formats:
Serial.print(x); // print as an ASCII-encoded decimal - same as "DEC"
Serial.print("\t"); // prints a tab

Serial.print(x, DEC); // print as an ASCII-encoded decimal
Serial.print("\t"); // prints a tab

Serial.print(x, HEX); // print as an ASCII-encoded hexadecimal
Serial.print("\t"); // prints a tab

Serial.print(x, OCT); // print as an ASCII-encoded octal
Serial.print("\t"); // prints a tab

Serial.print(x, BIN); // print as an ASCII-encoded binary
// then adds the carriage return with "println"
delay(200); // delay 200 milliseconds
}
Serial.println(""); // prints another carriage return
}
