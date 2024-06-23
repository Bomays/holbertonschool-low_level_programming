#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Explication:
 * ((Hr / 10  + '0'); give the first number thanks
 * to the division and convert it in caracter thanks to '+0'
 * ((Hr % 10) + '0'); give the second number tanks to
 * the reminder of the modulo calcul and convert it in caracter
 *
 * Return: no return
 */

void jack_bauer(void)
{
	int Hr;
	int Min;

	for (Hr = 0; Hr < 24; Hr++)

		for (Min = 0; Min < 60; Min++)
	{
			_putchar((Hr / 10)  + '0');
			_putchar((Hr % 10) + '0');
			_putchar(':');
			_putchar((Min / 10) + '0');
			_putchar((Min % 10) + '0');
			_putchar('\n');
	}
}
