#include "hash_tables.h"

/**
 * hash_table_set - function that create a hash.
 * @ht: hash table reference.
 * @key: key to add to the node.
 * @value: value to add to the node.
 *
 * Return: integer value 1 for succes and 0 for failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *auxiliar_node;
	unsigned long int index = 0;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	auxiliar_node = node;

	if (!key)
		return (0);
	if (!value)
		return (0);

	/* where? -> index */
	index = key_index((unsigned char *)key, (*ht).size);

	/* if collision ? */
	if (*((*ht).array) + index)
	{
		auxiliar_node = node;
		(*node).next = *((*ht).array + index);
		*((*ht).array + index) = auxiliar_node;
	}
	else
	{
		*((*ht).array + index) = node;
		(*node).next = NULL;
	}
	(*node).key = malloc(sizeof(hash_node_t));
	if (!(*node).key)
		return (0);
	(*node).key = strdup(key);
	(*node).value = malloc(sizeof(hash_node_t));
	if (!(*node).value)
		return (0);
	(*node).value = strdup(value);
	return (1);
}
