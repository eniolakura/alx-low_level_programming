#include "main.h"

/**
 * print_numbers -prints 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
