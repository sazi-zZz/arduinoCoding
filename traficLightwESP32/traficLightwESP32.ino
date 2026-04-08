#define RED_PIN    25
#define YELLOW_PIN 26
#define GREEN_PIN  27

void setup() {
  pinMode(RED_PIN,    OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN,  OUTPUT);
}

void allOff() {
  digitalWrite(RED_PIN,    LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN,  LOW);
}

void loop() {
  // RED — stop
  allOff();
  digitalWrite(RED_PIN, HIGH);
  delay(4000);

  // GREEN — go
  allOff();
  digitalWrite(GREEN_PIN, HIGH);
  delay(4000);

  // YELLOW — slow down
  allOff();
  digitalWrite(YELLOW_PIN, HIGH);
  delay(2000);
}