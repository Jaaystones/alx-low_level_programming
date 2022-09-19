#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Create a program that generates random valid passwords for the program 101-crackme.
 *
 * Return: generated password
 */

int main(void)
{
	char c;
	int i;

	srand(time(0));
	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);

	return (0);
}
