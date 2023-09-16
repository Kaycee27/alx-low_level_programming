#include "main.h"
#include "my_putchar.h"

/**
 * print_numbers - to print values
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
