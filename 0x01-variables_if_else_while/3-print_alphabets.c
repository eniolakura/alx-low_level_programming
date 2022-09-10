#include <stdio.h>

/**
 * main - Prints alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
	putchar('\n');
}
