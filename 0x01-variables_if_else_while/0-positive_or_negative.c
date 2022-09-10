#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point of the application
 * Description:This program prints some statemts depending
 * whether the number n is positive, zero or negative
 * Return: (0)
 */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if (n > 0)
					printf("%d is positive\n", n);
				else if (n == 0)
					printf("%d is zero\n", n);
				else
					printf("%d is negative\n", n);

					return (0);

}
