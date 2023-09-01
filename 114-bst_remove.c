#include "binary_trees.h"

/**
 * bst_remove - Removes a node from the BST
 * @root: pointer to the root node of the tree where you will remove a node
 * @value: value to remove from the tree
 *
 * Return: pointer to the new root of the tree
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node, *current;

	if (!root)
		return (NULL);

	node = bst_search(root, value);

	current = node;
	if (node->left && node->right)
	{
		current = current->right;
		while (current->left)
			current = current->left;
		current->parent->left = NULL;
	}
	/*else if (node->right)
		current = current->right;
	else if (node->left)
		current = current->left;*/

	if (node->parent == NULL)
		root = current;
	else
	{
		if (current->n > node->parent->n)
			node->parent->right = current;
		else
			node->parent->left = current;
	}

	current->parent = node->parent;
	current->left = node->left;
	current->right = node->right;

	free(node);

	return (root);
}

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
