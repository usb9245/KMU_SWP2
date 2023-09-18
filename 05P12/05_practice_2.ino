#define PIN_LED 7

void setup() {
    pinMode(PIN_LED, OUTPUT);
}

void loop() {
    digitalWrite(PIN_LED, false); // on
    delay(1000);

    for(int i=0;i<5;i++) {
        digitalWrite(PIN_LED, true); // off
        delay(100);
        digitalWrite(PIN_LED, false); // on
        delay(100);
    }

    digitalWrite(PIN_LED, true); // off
    while(1) {}
}
