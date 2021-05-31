#include "hash_tables.h"

/**
 *
 *
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;

	if (!ht || !key)
		return (NULL);

	hash_djb2((const unsigned char *)key);
