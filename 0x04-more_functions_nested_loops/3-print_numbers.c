#include "holberton.h"

/**
* print_numbers - function that print numbers from 0 to 9,
* followed by new line
*
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
