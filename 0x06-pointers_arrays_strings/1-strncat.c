#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n);
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c++])
		i++;

	/**
	 * src does not need to be null trminated
	 * if it contains n or more bytes
	*/
	for (c = 0; src[c] && c < n; c++)
		dest[i++] = scr[c];

	return (dest);
}
