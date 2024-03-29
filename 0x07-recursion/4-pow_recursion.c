#include "holberton.h"
/**
* _pow_recursion - function that returns value of x raised to y
* @x: a number
* @y: a number
* Return: x raised to y, if x<0 return -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
