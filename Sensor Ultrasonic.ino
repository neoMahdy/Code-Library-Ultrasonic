/*
      neo Mahdy 
  Penggaris Digital
  Sensor Ultrasonic
                         */

#define trig 12
#define echo 13
long jarak, durasi;

void setup() {
  // put your setup code here, to run once:
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(trig, LOW);
  durasi = pulseIn(echo, HIGH);
  jarak = durasi * 0.034 / 2;
  
  Serial.print("Jarak : ");
  Serial.print(jarak);
  Serial.println(" Cm");
  delay(500);
}
