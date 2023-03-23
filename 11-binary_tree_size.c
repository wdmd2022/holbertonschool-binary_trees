#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree from a given
 * node identified as the root from which to measure (doesn't have to be
 * the actual root for the entire tree)
 * @tree: pointer to the root node of the tree from which we wish to measure
 * Return: size_t type, representing the number of nodes in tree incl. root;
 * if tree is NULL, returns 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;
	size_t size = 0;

	if (!tree)
	{
		return (size);
	}
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	size = left_size + right_size + 1;
	return (size);
}
