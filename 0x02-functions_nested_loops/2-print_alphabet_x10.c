#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Description: function print_alphabet, in lowercase
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(i);
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
	}
	_putchar ('\n');
}
