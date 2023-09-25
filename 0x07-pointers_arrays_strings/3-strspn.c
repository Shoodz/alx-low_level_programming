#include "main.h"

/**
 * _strspn - get the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
