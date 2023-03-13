#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	char *program_name;

	if (argc > 0)
	{
		program_name = argv[0];
	}
	else
	{
		program_name = "unknown";
	}
	printf("%s\n", program_name);

	return (EXIT_SUCCESS);
}
