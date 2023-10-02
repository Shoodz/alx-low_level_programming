#include "main.h"

/**
 * *_memset - fills memory with a constant bytes.
 * @s: pointer to put constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
