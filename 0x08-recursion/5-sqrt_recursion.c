#include "main.h"

/**
 * pow_op - returns square root of a number
 * @n: number
 * @t: iterator
 * Return: square root
 */
int pow_op(int n, int t)
{
	if (t % (n / t) == 0)
	{
		if (t * (n / t) == n)
			return (t);
		else
			return (-1);
	}
	return (0 + pow_op(n, t + 1));
}
/**
 * _sqrt_recursion - returns suare root
 * @n: nnumber
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pow_op(n, 2));
}
