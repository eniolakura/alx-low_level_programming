#include "main.h"
/**
 * islower - checks if a character is lowercase.
 *
 * Return: 1 if lower , 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
		return (0);
}
