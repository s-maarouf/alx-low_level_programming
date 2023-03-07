#include "main.h"

/**
 * print_chessboard - is a function that prints the chessboard.
 *
 * @a: is the input pointer
 *
 * Return: none
 */

#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
			putchar(' ');
		}
		putchar('\n');
	}
}
