#include <stdio.h>

/**
* main - Entry point
*
* Description: print all alphabet letters
*
* Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		puchar(ch);
		ch++;
	}
	puchar('\n');
	return (0);
}
