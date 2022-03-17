#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase
 *
 * Description: print 10 times
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 0; i <= 10; i++)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		 _putchar ('\n');
	}
}
