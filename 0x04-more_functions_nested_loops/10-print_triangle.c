#include "holberton.h"

/**
* print_triangle - function that prints a triangle
* @size: size of square
* Return: Nothing
*/
void print_triangle(int size)
{
        int i, j, b;

        if (size <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (i = 0; i < size; i++)
                {
                        for (j = 0; j < size; j++)
                        {
				b = size - i - 1;
				if (j < b)
					_putchar(' ');
				else
                                	_putchar(35);
                        }
                        _putchar('\n');
                }
        }
}
