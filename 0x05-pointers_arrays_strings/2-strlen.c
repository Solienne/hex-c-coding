#include "holberton.h"
/**
* _strlen - returns length of string
* @s: variable being evaluated
*
* Return: Length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
