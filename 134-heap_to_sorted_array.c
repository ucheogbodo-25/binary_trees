#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef binary_tree_t heap_t;

/**
 * heap_to_sorted_array - Converts a Binary Max Heap to a sorted array.
 * @heap: Pointer to the root node of the heap to convert.
 * @size: Address to store the size of the array.
 *
 * Return: A pointer to the sorted array (in descending order).
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
    int *sorted_array;
    size_t heap_size, i;

    if (!heap || !size)
        return (NULL);

    heap_size = 0;
    binary_tree_t *node;

    // Calculate the size of the heap
    for (node = heap; node; node = node->left)
        heap_size++;

    sorted_array = malloc(sizeof(int) * heap_size);
    if (!sorted_array)
        return (NULL);

    // Extract elements from the max heap one by one to form the sorted array
    for (i = 0; i < heap_size; i++)
    {
        sorted_array[i] = heap->n;
        // Replace the root with the last node in the heap
        if (heap->left && (!heap->right || heap->left->n >= heap->right->n))
            heap->n = heap->left->n;
        else if (heap->right)
            heap->n = heap->right->n;
        // Heapify the tree
        while ((heap->left && heap->n < heap->left->n) ||
               (heap->right && heap->n < heap->right->n))
        {
            if (!heap->right || heap->left->n >= heap->right->n)
            {
                int temp = heap->n;
                heap->n = heap->left->n;
                heap->left->n = temp;
                heap = heap->left;
            }
            else
            {
                int temp = heap->n;
                heap->n = heap->right->n;
                heap->right->n = temp;
                heap = heap->right;
            }
        }
    }

    *size = heap_size;
    return (sorted_array);
}
