#include "hash_tables.h"

/**
 * hash_table_create - create a hash table from space in memorry initialized to NULL.
 * @size: size table.
 *
 * Return: pointer to the table.
 */
 hash_table_type *hash_table_create(unsigned long int size)
{
	/* create an array */
	hash_table_type *table;
	unsigned int i = 0;

	/* both table size because we are in the array firts */
	table = malloc(sizeof(hash_table_type));
	if (!table)
		return (NULL);

	/* space memory for pointer to each node */
	(*table).array = malloc(size*sizeof(hash_node_type *));
	if (!(*table).array)
	{
		/* free table if node allocation fails */
		free(table);
		return (NULL);
	}

	/* initialize array data to NULL */
	for (; i < size; i++)
		/* accesing twice*/
		*((*table).array + i) = NULL;

	return (table);
}