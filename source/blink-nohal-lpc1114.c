#include <cmsis.h>
#define DELAY_TIMES (100000)

int main()
{

	LPC_SYSCON->SYSAHBCLKCTRL |= SYSAHBCLKCTRL_IOCON;
	LPC_GPIO1->DIR |= 7;
	LPC_GPIO1->DIR |= 8;

	volatile uint32_t count = 0;
	for(;;){
		for(count = 0; count < DELAY_TIMES; count ++);
		LPC_GPIO1->DATA |= (1 << 7);	
		LPC_GPIO1->DATA |= (1 << 8);	
		for(count = 0; count < DELAY_TIMES; count ++);
		LPC_GPIO1->DATA &= ~(1 << 7);
		LPC_GPIO1->DATA &= ~(1 << 8);
	}

	return 0;
}

