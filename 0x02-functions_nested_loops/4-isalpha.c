#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * _isalpha takes in a character
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c<= 90)
		return (1);
	return (0);
}
