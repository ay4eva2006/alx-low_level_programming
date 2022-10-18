Oi#include "main.h"

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)

{

	if (c > 97 && c < 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
