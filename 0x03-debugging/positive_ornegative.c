#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	positive_or_negative(i);
	{
		if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
	printf("%d is zero\n", i);
	}

	return (0);
	}
	return (0);
}
