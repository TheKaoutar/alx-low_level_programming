#include <stdio.h>

/**
* main - Entry point
*
* Description: print alphabets except q and e.
*
* Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		puchar(ch);
		ch++;
	}
	puchar('\n');

	return (0);
}
