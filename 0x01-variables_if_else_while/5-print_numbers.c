#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase and upper case
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'j'; letter++)

	{
	if (letter != 'e' && letter != 'i')
	putchar(letter);
	}

	putchar('\n');
	return (0);
}
