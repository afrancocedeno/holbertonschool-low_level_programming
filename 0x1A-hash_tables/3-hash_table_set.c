#include "hash_tables.h"

/**
 * hash_table_set
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *new_node;
	unsigned long int index = 0;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	new_node = node;

	if (!key)
		return (0);
	if (!value)
		return (0);

	/* where? -> index */
	index = key_index((unsigned char *)key, (*ht).size);

	/* if collision ? */
	if (*((*ht).array) + index)
		(*node).next = new_node;
	else
		*((*ht).array + index) = new_node;
	(*node).key = strdup(key);
	(*node).value = strdup(value);
	(*node).next = NULL;

	return (1);
}
