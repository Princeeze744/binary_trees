#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree
 * @tree: ponter to the root node of the BST to search
 * @value: value to search in the tree
 *
 * Return: pointer to the node containing a value equals to @value
 * otherwise NULL if nothing is found or if @tree is NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		else if (value < tree->n)
		{
			tree = tree->left;
			continue;
		}
		else if (value > tree->n)
		{
			tree = tree->right;
			continue;
		}
	}
	return (NULL);
}
