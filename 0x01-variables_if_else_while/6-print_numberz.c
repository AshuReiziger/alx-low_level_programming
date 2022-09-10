#include <stdio.h>

/**
 * main - Entry point of Application
 * Description: prints single digit numbers of base 10
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
