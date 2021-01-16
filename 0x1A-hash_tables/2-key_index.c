#include "hash_tables.h"

/**
 * key_index - funciton that simplyfy number created from key
 * using mod funciton.
 * @key: intput string to save in the table.
 * @size: array size.
 *
 * Return: index value to save in the table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int returned_value = 0, index = 0;

	returned_value = hash_djb2(key);
	index = returned_value % size;

	return (index);
}
