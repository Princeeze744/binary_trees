#include <stdio.h>
#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a binary search tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node
 *
 * Return: pointer to the created node otherwise NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current_root;

	if (*tree == NULL)
	{
		*tree = (bst_t *)binary_tree_node(NULL, value);
		return (*tree);
	}

	current_root = *tree;

	while (current_root)
	{
		if (value == current_root->n)
			break;
		if (value < current_root->n)
		{
			if (current_root->left)
			{
				current_root = current_root->left;
				continue;
			}
			current_root->left = (bst_t *)binary_tree_node(current_root, value);
			return (current_root->left);
		}
		else if (value > current_root->n)
		{
			if (current_root->right)
			{
				current_root = current_root->right;
				continue;
			}
			current_root->right = (bst_t *)binary_tree_node(current_root, value);
			return (current_root->right);
		}
	}
	return (NULL);
}
