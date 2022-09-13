#include "main.h"
/**
 * main - Write a program that prints putchar
 * To followed by a new line.
 * Return: Always 0 (Success)
 */
int_putchar(char c);
{
	char *c = "main";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
