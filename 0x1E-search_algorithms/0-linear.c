#include "search_algos.h"

int recurse_helper(int *arr, size_t size, int val, size_t x);

/**
  * linear_search - Searches for a value in an array
  *                 of integers using linear search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	return (recurse_helper(array, size, value, 0));
}
/**
 * recurse_helper - recursive implementation of linear search
 * @arr: pointer to array of ints
 * @size: size of array
 * @val: value to locate
 * @idx: current index
 *
 * Return: index of value or -1 if value not found
 */
int recurse_helper(int *arr, size_t size, int val, size_t x)
{
	if (x == size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", x, arr[x]);

	if (arr[x] == val)
		return (x);

	return (recurse_helper(arr, size, val, x + 1));
}
