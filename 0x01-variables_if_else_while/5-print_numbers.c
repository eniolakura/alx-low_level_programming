#include <stdio.h>

/**
 * main - prints all single digit numbers in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	while (i <= 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
