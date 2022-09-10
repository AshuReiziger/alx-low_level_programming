#include <stdio.h>

/**
 * main - Entry point of Application
 * Description: Prints characters in reverse order
 * Return: Always 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
