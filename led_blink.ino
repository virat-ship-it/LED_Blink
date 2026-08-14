// LED Blink — 1 second on, 1 second off
// LED: D13 → 220 ohm resistor → LED anode → cathode → GND

const uint8_t LED_PIN    = 13;
const uint16_t BLINK_MS  = 500;   // half-period: 500ms on + 500ms off = 1s cycle

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_MS);
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_MS);
}