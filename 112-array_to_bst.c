#include "binary_trees.h"

/**
 * array_to_bst - builds a BST from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 *
 * Return: pointer to the root node of the BST created
 * otherwise NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 1;
	bst_t *root;

	if (!array)
		return (NULL);

	root = (bst_t *)binary_tree_node(NULL, array[0]);
	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}
	return (root);
}
