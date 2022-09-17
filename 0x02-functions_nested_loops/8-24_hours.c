#include "main.h"

/**
 * jack_bauer - entry point
 * Description: printing every minute of jack_bauer
 */

void jack_bauer(void)
{
	 int hr, mins;

	 for (hr = 0; hr <= 23; hr++)
	 {
		 for (mins = 0; mins <= 59; mins++)
		 {
			 _putchar((hr / 10) + '0');
			 _putchar((hr % 10) + '0');
			 _putchar(':');
			 _putchar((mins / 10) + '0');
			 _putchar((mins % 10) + '0');
			 _putchar('\n');
		 }
	 }
}
