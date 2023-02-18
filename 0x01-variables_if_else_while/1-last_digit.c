#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program to assign n to a random number and print last digit
 * Return: 0
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 an  not 0\n", n, m);
	return (0);
}
