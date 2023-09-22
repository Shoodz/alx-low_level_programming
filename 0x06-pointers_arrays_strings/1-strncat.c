#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to appended.
 * @src: The string to  appended dest.
 * @n: The number of bytes from src to appended dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_l = 0;

	while (dest[i++])
		dest_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_l++] = src[i];

	return (dest);
}
