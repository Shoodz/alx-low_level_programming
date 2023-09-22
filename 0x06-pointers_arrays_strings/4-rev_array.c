#include "main.h"

/**
 * reverse_array - Reverses  content of  array of integers
 *
 * @a: Pointer to array
 * @n: Number of elements in  array
 *
 * Description: This function takes  array of integers and reverses
 * the order of its elements.
 */
void reverse_array(int *a, int n)
{
	int sta;
	int end;

	sta = 0;
	end = n - 1;
	while (sta < end)
	{
		n = a[sta];
		a[sta] = a[end];
		a[end] = n;
		sta++;
		end--;
	}
}
