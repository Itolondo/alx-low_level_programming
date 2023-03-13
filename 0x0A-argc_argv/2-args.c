#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints arguments it receives
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
