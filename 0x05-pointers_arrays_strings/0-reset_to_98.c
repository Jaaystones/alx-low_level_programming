#include "main.h"

/**
  * reset_to_98 - Updates the value it points to 98
  * @n: pointer to n
  *
  * Return: void
i  */

void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("%d\n", n);

	reset_to_98(&n);

	printf("%d\n", n);
	
	return (0);
}
