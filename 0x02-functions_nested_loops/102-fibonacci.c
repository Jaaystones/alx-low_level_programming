#include <stdio.h>
#include <stdlib.h>
#include "main.h"
using namespace std;
/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ 
	int sum = 0;

	for (int i = 3; i < 1024; i++) 
	{

		if (i%3==0 or i%5==0)

			sum += i;
	}

	cout << sum;

	return 0;
}
