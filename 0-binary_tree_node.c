#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: parent node
 * @value: value of the node
 *
 * Return: pointer to the newly created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;

	node->parent = parent;
	node->n = value;

	return (node);
}
