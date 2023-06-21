#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks is a character in lowercase
 * @c: the integer value it receives
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
