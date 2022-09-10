#include <stdio.h>

/**
 * main - Entry point of Application
 * Description - Prints digits less than 10
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i % 10 <= 9)
		printf("%d", i);
		i++;
	putchar('\n');

	return (0);
}


