#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Seun == Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d na  zero\n", n);
	else if (n < 0)
		printf("%d na  negative\n", n);
	return (0);
}
