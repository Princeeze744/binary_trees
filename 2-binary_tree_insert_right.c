#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: parent node
 * @value: node data
 *
 * Return: Pointer to the newly created node
 * otherwise NULL if @parent is NULL or on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;

	if (parent->right)
	{
		temp = parent->right;
		temp->parent = node;
		node->right = temp;
	}

	node->parent = parent;
	node->n = value;
	parent->right = node;

	return (node);
}
