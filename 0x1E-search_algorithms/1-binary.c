#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

void print_array(int *array, size_t size);
int recursive_binary_search(int *array, int left, int right, int value);

int binary_search(int *array, size_t size, int value)
{
    /* create a key to print from half */
    size_t left = 0, right = size - 1;
    int return_value;

    if (!array)
        return (-1);
 
    print_array(array, size);
    return_value = recursive_binary_search(array, 0, size - 1, value);

    return (return_value);
}

int recursive_binary_search(int *array, int left, int right, int value)
{
    if (right >= left)
    {
        int half = (right + left) / 2;

        if (array[half] == value)
        {
            // printf("\n\n\t == index: %d half: %d\n\n", array[half], half);
            return half;
        }
        if (value < array[half])
        {
            print_array(array, half);
            // printf("\n\n\tindex: %d\n\n", array[half]);
            return recursive_binary_search(array, left, half - 1, value);
        }
        else
        {
            print_array(&array[half], right);
            // printf("\n\n\tindex: %d\n\n", array[half]);
            return recursive_binary_search(array, half + 1, right, value);
        }
    }
    return (-1);
}

void print_array(int *array, size_t size)
{
    size_t i = 0;
    /* print first part of the line */
    printf("Searching in array: ");

    /* print each number in the same line */
    for (; i < size - 1; i++)
        printf("%d, ", array[i]);

    /* print the last number without colon */
    printf("%d\n", array[i]);
}
