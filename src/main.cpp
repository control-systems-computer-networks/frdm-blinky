#include <mbed.h>

//DigitalOut red(LED1);
//DigitalOut green(LED2);
//DigitalOut blue(LED3);


class LED {
    DigitalOut pin;
public:
    LED(PinName p) : pin(p) {off();}
    void on (void) { pin.write(0);}
    void off(void) { pin.write(1);}
};
enum {on,off};

int main() {
    LED lights[] = {
         LED(LED1),LED(LED2),LED(LED3),
         LED(D5),LED(D8),LED(D9)
     };
    LED  blue(LED3);
    LED  grn = LED(PTB22);

    for(;;) {
        int pause=500;
        int n;
        for( n=0 ; n<6 ; n++ ){
            lights[n].on();
            wait_ms(pause);
            lights[n].off();
            wait_ms(pause);
            grn.on();
        }
    }

}
