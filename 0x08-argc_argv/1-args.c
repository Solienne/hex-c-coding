#include "holberton.h"
#include <stdio.h>
/**
* main - prints the number of arguments
* @argc: length of array
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
