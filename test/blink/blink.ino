// Definisikan pin yang terhubung ke custom chip
#define PIN_INPUT_DATA 13 // Pin untuk mengirim data ke IN
#define PIN_SELECTOR   12 // Pin untuk mengontrol SEL
// EN pin is wired to GND to keep the chip enabled

void setup() {
  Serial.begin(115200);
  Serial.println("Arduino Demux Tester Initialized.");

  // Set control pins as outputs from the Arduino's perspective
  pinMode(PIN_INPUT_DATA, OUTPUT);
  pinMode(PIN_SELECTOR, OUTPUT);
}

void loop() {
  // --- Test Case 1: SEL = 0, IN = 1 ---
  Serial.println("--> Testing: SEL=LOW, IN=HIGH");
  digitalWrite(PIN_SELECTOR, LOW);
  digitalWrite(PIN_INPUT_DATA, HIGH);
  delay(2000); // Wait 2 seconds

  // --- Test Case 2: SEL = 0, IN = 0 ---
  Serial.println("--> Testing: SEL=LOW, IN=LOW");
  digitalWrite(PIN_INPUT_DATA, LOW);
  delay(2000); // Wait 2 seconds

  // --- Test Case 3: SEL = 1, IN = 1 ---
  Serial.println("--> Testing: SEL=HIGH, IN=HIGH");
  digitalWrite(PIN_SELECTOR, HIGH);
  digitalWrite(PIN_INPUT_DATA, HIGH);
  delay(2000); // Wait 2 seconds

  // --- Test Case 4: SEL = 1, IN = 0 ---
  Serial.println("--> Testing: SEL=HIGH, IN=LOW");
  digitalWrite(PIN_INPUT_DATA, LOW);
  delay(2000); // Wait 2 seconds
}