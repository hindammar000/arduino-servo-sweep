
  #include <Servo.h>

Servo servo1, servo2, servo3, servo4;

unsigned long startTime;
int pos;

void setup() {
  servo1.attach(4);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(7);

  startTime = millis();
}

void loop() {

  while (millis() - startTime < 2000) {

    for (pos = 0; pos <= 180; pos++) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);

      if (millis() - startTime >= 2000)
        break;
    }

    for (pos = 180; pos >= 0; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);

      if (millis() - startTime >= 2000)
        break;
    }
  }

  // تثبيت جميع السيرفوهات عند 90 درجة
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  while (true);
}