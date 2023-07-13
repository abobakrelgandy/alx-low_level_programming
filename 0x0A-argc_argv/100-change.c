#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints the minimum number of coins
 * to make change for an amount of money.
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of commandline arguments.
 * Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	if (argv == 2)
	{
	int i, leastcounts = 0, money = atoi(argv[1]);
	int counts[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= counts[i])
		{
			leastcounts += money / counts[i];
			money = money % counts[i];
			if (money % counts[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcounts);
	}
	else
	{
		printf("Error\n")
		return (1);
	}
	return (0);
}
