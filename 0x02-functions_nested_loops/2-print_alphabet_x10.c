By#include "main.h"

/**
 * main - to check the code.
 * print_alphabet_x10 - print a - z ten times
 * return: always 0.
 */
int main(void)
{
void print_alphabet_x10(void);


	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
