#include "holberton.h"
#include <stdio.h>

/**
* main - function that prints the program's name
* @argc: length of array
* @argv: array of arguments
* Return: program's name
*/
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
