#include "holberton.h"
#include <stdio.h>
/**
* main - prints the commands of a program
* @argc: length of array
* @argv: array of commands
* Return: 0
*/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
