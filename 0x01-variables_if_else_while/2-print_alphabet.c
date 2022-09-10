#include<stdio.h>

/**
 * mainn - Prints alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnoprstuvwxyz";
	int i;

	for (i = 0 ; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
