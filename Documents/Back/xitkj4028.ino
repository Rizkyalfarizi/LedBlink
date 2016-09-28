/*
  Blink
  Menyalakan LED pada Pin 5 selama 3 detik dan Mematikanya selama 3 detik.
 
  Ini contoh Kode Programnya.
 */
 
int led = 5;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital Pin 5.

void setup() 
{                
  pinMode(led, OUTPUT);//Mengatur Digital Pin sebagai Output.     
}

void loop() 
{
  digitalWrite(led, HIGH);   // Mengatur LED agar Menyala.
  delay(3000);               // Tunggu sampai 3 detik.
  digitalWrite(led, LOW);    // Mengatur LED agar Mati.
  delay(3000);               // Tunggu samapi 3 detik.
}