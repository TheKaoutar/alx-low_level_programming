#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print the alphabet in lowecase followed by a new line.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
