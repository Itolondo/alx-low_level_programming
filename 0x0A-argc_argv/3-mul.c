#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print a result of multiplication
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)

	{
		printf("Error\n");
		return (1);
	}
	{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	}
	return (0);
}
