#include <stdlib.h>

/**
 * main-print sum of two numbers.
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of commandline arguments.
 * Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[0]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printif("Error\n");
		return (1);
	}

	return (0);
}

