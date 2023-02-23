/**
 * jack_bauer - prints every minute of the day of jack bauer
 * from 00:00 to 23:59 hrs
 * the second digit must rotate every 10
 * Return: 24 hours clock line by line
 */

#include "main.h"

void jack_bauer(void)
{
	int hrs, min;

	for (hrs = 0; hrs < 24; hrs++)
	{
	for (min = 0; min < 60; min++)
	{
	_putchar((hrs / 10) + '0');
	_putchar((hrs % 10) + '0');
	_putchar(':');
	_putchar((min / 10) + '0');
	_putchar((min % 10) + '0');
	_putchar('\n');
}
}
}
