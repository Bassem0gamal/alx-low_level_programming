#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: Null if an error occurs.
 *         Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
  
{
	hash_table_t *i;
	unsigned long int j

	ht = malloc(sizeof(hash_table_t));
	if (i == NULL)
		return (NULL);

	i->size = size;
	i->array = malloc(sizeof(hash_node_t *) * size);
	if (i->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ht->array[j] = NULL;

	return (i);
}
