#include <mbed.h>

DigitalOut red(LED1);
DigitalOut green(LED2);
DigitalOut blue(LED3);

enum {on,off};

int main() {
    for(;;) {
        red = on;
        blue = green = off;
        wait(0.25);
        blue = on;
        green = red = off;
        wait(0.25);
        green = on;
        red = blue = off;
        wait(0.25);
    }
}
