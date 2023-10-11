#include <stdio.h>

void print_alphabet(void)
{
	char this_char = 'a';
	while (this_char <= 'z')
	{
		putchar(this_char);
		this_char++;
	}

	putchar('\n');

	putchar(this_char);

	putchar('\n');
}

int main(void)
{
	print_alphabet();


	return (0);
}
