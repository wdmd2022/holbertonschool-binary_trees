#include "binary_trees.h"

/**
 * binary_tree_is_full - checks to see if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: int, 1 if full, 0 otherwise (if not full, or if NULL)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int status = 0;
	int left = 0;
	int right = 0;

	if (!tree)
	{
		return (status);
	}
	if ((tree->left) && (tree->right))
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if ((left == 0) || (right == 0))
		{
			return (0);
		}
		return (1);
	}
	if ((!tree->left) && (!tree->right))
	{
		return (1);
	}
	return (0);
}
