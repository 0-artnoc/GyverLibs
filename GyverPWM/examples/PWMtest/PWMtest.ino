#include <GyverPWM.h>

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  // Данные функции убирают один ШИМ выход у 8-ми битных таймеров, оставляя нам ШИМ пины D3, D5, D9 и D10 на ATmega328

  PWM_16KHZ_D3(30);   // ШИМ 16 кГц на пине D3, заполнение 30 из 255
  PWM_20KHZ_D5(50);   // ШИМ 20 кГц на пине D5, заполнение 50 из 255. Сломает millis() и delay()!
  PWM_16KHZ_D9(760);  // ШИМ 16 кГц на пине D9, заполнение 760 из 1023
  PWM_16KHZ_D10(800); // ШИМ 16 кГц на пине D10, заполнение 800 из 1023
  // пины 9 и 10 работают на одной частоте, запустить на разных не получится
}

void loop() {
}
