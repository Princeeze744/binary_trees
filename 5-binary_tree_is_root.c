#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is a leaf
 * @node: node to be checked
 *
 * Return: 1 if node is a root otherwise 0
 * 0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!(node->parent));
}
