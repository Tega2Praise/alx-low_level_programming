#include "main.h"

/**
 * main - entry point
 * print - the alphabet in lowecase
 * Return - always 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
		_putchar('\n');
	}
	return (0);
}
