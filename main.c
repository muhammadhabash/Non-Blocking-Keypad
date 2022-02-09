#include "./MCAL/GPIO/GPIO.h"
#include "./HAL/LED/LED.h"
#include "./MCAL/TIMERS/Timers.h"
#include "./HAL/KEYPAD/KEYPAD.h"

int main(void){
	
	uint8_t u8_pressedKey;
	KEYPAD_init();
	LED_en(PORTB,PIN4);
	LED_en(PORTB,PIN5);
	LED_en(PORTB,PIN6);
	LED_en(PORTB,PIN7);
	while (1){
		
		KEYPAD_nonBlockingScan(&u8_pressedKey);
		PORTB_DATA = u8_pressedKey << 4;
    }
}

