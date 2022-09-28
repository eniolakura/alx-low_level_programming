#include "main.h"

/**
 * is_prime_number - checks if number is a prime number
 * @n: number
 * Return: 1 if prime and zero otherwise
 */
int is_prime_number(int n)
{
	if ((n % n) == 0 && (n % 1) == 0)
	{
		return (1);
	}
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
}
