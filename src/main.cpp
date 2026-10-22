#include <Arduino.h>

constexpr unsigned long SERIAL_INTERVAL_MS = 5000;

void setup()
{
    Serial.begin(115200);

    delay(300);

    Serial.println();
    Serial.println("MURPH firmware starting...");
}

void loop()
{
    static unsigned long lastPrint = 0;

    const unsigned long now = millis();

    if (now - lastPrint >= SERIAL_INTERVAL_MS)
    {
        lastPrint = now;

        Serial.println("MURPH: system alive");
    }
}
