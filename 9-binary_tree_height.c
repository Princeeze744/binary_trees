#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the node of the tree to measure the height
 *
 * Return: height of the node, otherwise NULL if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_binary_tree_height(tree, 0));
}

/**
 * _binary_tree_height - internal function to check height
 * @tree: pointer to node of the tree to measure the height
 * @height: height counter
 *
 * Return: height of node
 */
size_t _binary_tree_height(const binary_tree_t *tree, size_t height)
{
	int _height;
	size_t left_height, right_height;

	_height = height;
	if (!tree)
		return (_height - 1);

	height++;
	left_height = _binary_tree_height(tree->left, height);
	right_height = _binary_tree_height(tree->right, height);

	if (left_height >= right_height)
		return (left_height);
	return (right_height);
}
