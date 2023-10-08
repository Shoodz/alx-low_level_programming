<<<<<<< HEAD
#include "main.h"
=======
#include <unistd.h>
>>>>>>> 7bfd55edbe99deee36fa474d92e6ae97db670020

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
<<<<<<< HEAD
 * Return: On success 1.
=======
 * Return: on success 1.
>>>>>>> 7bfd55edbe99deee36fa474d92e6ae97db670020
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
