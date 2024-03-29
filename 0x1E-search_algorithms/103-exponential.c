#include "search_algos.h"

/**
 * bin_search - makes binary search on the given subarray
 * @array: the array
 * @first: first index
 * @last: last index
 * @value: value to search for
 * Return: returns index of value or -1
 */
int bin_search(int *array, size_t first, size_t last, int value)
{
size_t mid;
int val;
if (first > last)
return (-1);
printf("Searching in array: ");
for (mid = first; mid <= last; mid++)
{
if (mid != first)
printf(", ");
printf("%d", array[mid]);
}
printf("\n");
mid = (first + last) / 2;
if (array[mid] == value)
return (mid);
else if (value < array[mid])
val = bin_search(array, first, mid - 1, value);
else if (value > array[mid])
val = bin_search(array, mid + 1, last, value);
return (val);
}

/**
 * exponential_search - a function that searches for a value
 * in a sorted array of integers using the Exponential search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to search for
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
size_t i, initial_value, last_value;
if (!array)
return (-1);
if (array[0] == value)
return (0);
for (i = 1; i < size && array[i] <= value; i *= 2)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
initial_value = i / 2;
last_value = i;
if (i >= size)
last_value = size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", initial_value, last_value);
return (bin_search(array, initial_value, last_value, value));
}
