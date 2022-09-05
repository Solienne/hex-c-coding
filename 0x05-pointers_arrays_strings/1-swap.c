#include "holberton.h"
/**
* swap_int - function thet swaps values of two integers
* @a: type int
* @b: type int
* Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
