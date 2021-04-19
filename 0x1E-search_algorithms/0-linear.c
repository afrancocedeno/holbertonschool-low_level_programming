#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - function that looks for a value in a sorted datatype.
 * @array:
 * @size:
 *
 * Return: the index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    /* if array is NULL */
    if (!array)
        return (-1);

    for (; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

        /* check each calue of the array */
        if (array[i] == value)
            return (int)i;

    }

    /* check if it did not find anything */
    return (-1);
}
