#include "main.h"

/**
 * print_alphabet_x10 - Entry babyy
 *
 *
 */
void print_alphabet_x10(void)
{
	int loopie = 0;

	while (loopie < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		loopie++;
	}
}
