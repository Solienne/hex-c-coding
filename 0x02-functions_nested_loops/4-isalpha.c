#include "holberton.h"

/**
* _isalpha - checks if it is an alphabet character
*@c: The character to be checked
* Return: 1 if c is a letter, lowercase or uppercase
*
* otherwise, )
*/
int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
