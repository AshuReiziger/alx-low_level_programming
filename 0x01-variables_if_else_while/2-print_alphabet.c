#include <stdio.h>

/**
 * main - entry point of Application
 * Description: prints lower case alphabets
 * Return: Always 0
 */

inr main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
