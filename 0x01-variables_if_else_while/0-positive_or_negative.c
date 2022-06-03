#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * Main - Prints a random number and states whether
 * This program will assign a random number to the variable n
 *
 * It is positive, negative, or zero.
 *
 *
 *
 * Return: Always 0.
 *
 */

int main(void)

{

	int n;



	srand(time(0));
 /* your code goes there */
	n = rand() - RAND_MAX / 2;



	if (n > 0)

		printf("%d is positive\n", n);

	else if (n < 0)

		printf("%d is negative\n", n);

	else

		printf("%d is zero\n", n);



	return (0);

}

