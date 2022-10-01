#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of application
 * Description: Program that multiplies two numbers.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
