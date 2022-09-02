#include "holberton.h"
/**
* _islower - a function to detect lowercase characters
* @c: single letter input
* Return: 1 if it c is lowercase, 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
