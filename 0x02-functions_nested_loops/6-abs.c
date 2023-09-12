#include "main.h"

/**
 * _abs - function that prints the absolute
 *        value of a number
 *
 * @n: takes an integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
