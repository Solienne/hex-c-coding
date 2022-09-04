#include "holberton.h"

/**
* _isdigit - function that checks for digits from 0 through 9
* @c: type int
* Return: 1 if int c is 0 through 9, 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
