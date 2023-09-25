#include "main.h"

/**
 * _strspn - get the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */

char *_strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}

	return (itr);
}
