#include <stdio.h>

/**
 * main - Entry point of Application
 * Description: prints all possible combinations
 * of single digit numbers
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
