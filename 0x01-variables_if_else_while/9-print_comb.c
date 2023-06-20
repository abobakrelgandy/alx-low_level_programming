#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit1 = 0;
	
	while (digit <= 9)
        {
		putchar(digit1 + 48);
		
		if (digit1 != 9)
		{
			putchar(' ');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	raturn (0);
