#include "main.h"

/**
 * main - to check the code.
 * print_alphabet_x10 - print a - z ten times
 * return: always 0.
 */

void print_alphabet_x10(void)
{

	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
