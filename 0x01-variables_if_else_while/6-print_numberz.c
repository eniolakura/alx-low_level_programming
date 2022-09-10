#include <stdio.h>

/**
 * main - prints all single digit numbers in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i = 0;

	while (i <= 9)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
