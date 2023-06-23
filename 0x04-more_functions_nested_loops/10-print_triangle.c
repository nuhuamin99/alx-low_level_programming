#include "main.h"

/**
 * print_triangle - print triangle with size var
 * @var: size of triangle to print
 * Created by: Nuhu Amin
 * cc: 26th july, 2023
 */

void print_triangle(int var)
{
	if (var < 1)
		_putchar('\n');
	else
	{
		int size = 1;

		do {
			int ii;

			for (ii = 1; ii <= var; ii++)
			{
				if (ii > (var - size))
					_putchar('#');
				else
					_putchar(' ');
			}

			_putchar('\n');
			size++;
		} while (size <= var);
	}
}
