#include <stdio.h>

/**
 * main - entry point
 * print - all single numbers of base 10
 * Return: always 0
 */
int main(void)
{
	char count = 0;

	for (count = 0; count <= 10; count++)
	{
	putchar(count + '0');
	}
	putchar('\n');
	return (0);
}
