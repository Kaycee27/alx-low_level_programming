#include "main.h"
#include "my_putchar.h"

/**
 * print_most_numbers - numbers without 2 and 4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 2 && i != 4)
		_putchar(i + '0');
	}
	_putchar('\n');

}
