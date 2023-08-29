#include "binary_trees.h"
#include <stdlib.h>

/**
 * heap_extract - Extracts the root node of a Max Binary Heap.
 * @root: Double pointer to the root node of the heap.
 *
 * Return: Value stored in the root node, or 0 if the function fails.
 */
int heap_extract(heap_t **root)
{
	if (!root || !*root)
		return (0);

	int extracted_value = (*root)->n;
	// Implement the extraction logic here...

	return (extracted_value);
}
