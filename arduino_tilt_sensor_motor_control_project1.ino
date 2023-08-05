// OUTPUTS
int en1 = 3 ;
// INPUT
int sensor = A0 ;
int reading = 0;
int slop = 0 ;
void setup() {
  Serial.begin(9600);
  //PINS OF MOTOR DRIVE
  pinMode(en1 , OUTPUT );
  pinMode( sensor , INPUT );
  }
void loop() {
reading = analogRead(sensor);
slop = map(reading, 0, 1023, 0, 255);
analogWrite(en1, slop);
}