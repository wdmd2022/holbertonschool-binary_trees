#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes of a binary tree from a given
 * node identified as the root from which to measure (doesn't have to be
 * the actual root for the entire tree) with at least one child. A NULL
 * pointer does not count as a child.
 * @tree: pointer to the root node of the tree from which we wish to measure
 * Return: size_t type, representing the number of nodes in tree with at least
 * one child. If tree is NULL, returns 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
	{
		return (0);
	}
	if ((tree->left) || (tree->right))
	{
		nodes++;
	}
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
