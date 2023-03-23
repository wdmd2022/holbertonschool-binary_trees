#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree from a given
 * node identified as the root from which to measure (doesn't have to be
 * the actual root for the entire tree). A NULL pointer is not a leaf.
 * @tree: pointer to the root node of the tree from which we wish to measure
 * Return: size_t type, representing the number of leaves in tree;
 * if tree is NULL, returns 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
	{
		return (0);
	}
	if ((!tree->left) && (!tree->right))
	{
		return (1);
	}
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
