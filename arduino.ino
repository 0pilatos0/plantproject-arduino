const int moisture_pin = A0;

void setup() {
    pinMode(moisture_pin, INPUT);
    Serial.begin(9600);
}

void loop() {
    int moisture = analogRead(moisture_pin);
    Serial.print("Moisture: ");
    Serial.println(moisture);
    delay(1000);

}
//code made by Paul van der Lei