#include "main.h"
/**
 * _strstr - finds the first occurance of a substring
 * needle in a haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of the located substring or 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *ghaystack;
	char *bneedle;

	while (*haystack != '\0')
	{
		ghaystack = haystack;
		bneedle = needle;

		while (*haystack != '\0' && *bneedle != '\0' && *haystack == *bneedle)
		{
			haystack++;
			bneedle++;
		}
		if (!*bneedle)
			return (ghaystack);
		haystack = ghaystack + 1;
	}
	return (0);
}
