#include "holberton.h"
/**
* _strlen - returns the length of string
* @s: variable being evaluated
*
* Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
* print_rev - prits string in reverse
* @s: variable being reversed
*
* return: nothing
*/
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s) - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
} 
