#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 *
 * Return nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{

		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
