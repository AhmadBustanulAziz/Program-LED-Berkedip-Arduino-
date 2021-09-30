/*
Nama      : Ahmad Bustanul Aziz
Tanggal   : 30 September 2021
Deskripsi : Sketch LED Berkedip Arduino
 */

//Inisialisasi pin yang mengontrol LED (Disini pakai pin 7)
const int pinLED = 7;

void setup() {
  //pin 7 diset sebagai Output
  pinMode(pinLED, OUTPUT);
}

void loop() {
  //LED menyala
  digitalWrite(pinLED, HIGH);
  //Delay 500 ms
  delay(500);
  //LED mati
  digitalWrite(pinLED, LOW);
  //Delay 500 ms
  delay(500);
}
