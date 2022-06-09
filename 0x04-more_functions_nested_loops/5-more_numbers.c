#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 15; i++)
		{
			if (i >= 9)
			{
				putchar((i / 10) + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
