#include "holberton.h"
/**
* _strlen_recursion - function that returns length of a string.
* @s: string
* Return: lenght of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
