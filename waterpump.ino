const long PUMP_DURATION = 600000;
const long PUMP_INTERVAL = 86400000;
/**
const int PUMP_MINUTES = 10;
const int DELAY_HOURS = 24;
 */
void setup() {
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  startPump();
  delay(PUMP_DURATION);
  stopPump();
  delay(PUMP_INTERVAL);
}

void stopPump(){
  digitalWrite(10, LOW);
  digitalWrite(13, HIGH);
}

void startPump() {
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
}
