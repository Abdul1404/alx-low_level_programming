#include "main.h"

/**
 * jack_bauer - prints evwry mimute of the day from 00:00 to 23:59
 *
 * Return: void
 *
 */
void jack_bauer(void)
{
	int hour, mins, frst_hour, frst_mins, scnd_hour, scnd_mins;

	for (hour = 0; hour < 24; hour++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			frst_hour = hour / 10 + '0';
			scnd_hour = hour % 10 + '0';
			frst_mins = mins / 10 + '0';
			scnd_mins = mins % 10 + '0';

			_putchar(frst_hour);
			_putchar(scnd_hour);
			_putchar(':');
			_putchar(frst_mins);
			_putchar(scnd_mins);
			_putchar('\n');
		}
	}
}
