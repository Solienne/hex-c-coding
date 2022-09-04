#include "holberton.h"

/**
* _isupper - function that checks for upercase character
* @c: single letter output
* Return: 1 if int c is uppercase, 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
