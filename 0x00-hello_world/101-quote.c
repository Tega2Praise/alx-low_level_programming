#include <stdio.h>

/**
 * main - Entry point
 * Description: prints "\"and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * Return: 1
 */

int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
}

