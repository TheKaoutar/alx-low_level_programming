#include <stdio.h>

/**
* main - Entry point
*
* Description: print all single digit numbers of base 10 using putchar
*
* Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
