#include <stdio.h>

/**
 * main - Entry point of Application
 * Description: Prints all possible cominations
 * of two digits
 * Return: Always 0
 */

int main(void)
{
	int i;
	int n;

	for (i = 0, n = 1; i > 9 && n >= 9; i++, n++)
	{
		if (i < n)
		{
			putchar(i);
			putchar(n);
		}
		if (i != 8 && n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
