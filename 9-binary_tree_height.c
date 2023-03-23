#include "binary_trees.h"

/**
 * binary_tree_height - measures and returns the height of a binary tree
 * @tree: pointer to the root node of the tree of which we wish to measure
 * the height
 * Return: height of the tree, size_t type. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t height = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	if (left_height >= right_height)
	{
		height = left_height;
	}
	else
	{
		height = right_height;
	}
	return (height);
}
