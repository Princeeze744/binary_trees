#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: parent node
 * @value: node data
 *
 * Return: Pointer to the newly created node
 * otherwise NULL if @parent is NULL or on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left)
	{
		temp = parent->left;
		temp->parent = node;
		node->left = temp;
	}

	node->parent = parent;
	node->n = value;
	parent->left = node;

	return (node);
}
