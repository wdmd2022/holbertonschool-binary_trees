#include "binary_trees.h"

/**
 * balance_helper - height measurer
 * @tree: pointer to root node of binary tree from which to measure
 * Return: height of tree from pointer, or 0 if tree is NULL
 */
size_t balance_helper(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;
	size_t size;

	if (!tree)
	{
		return (0);
	}
	left_size = balance_helper(tree->left) + 1;
	right_size = balance_helper(tree->right) + 1;
	if (left_size >= right_size)
	{
		size = left_size;
	}
	else
	{
		size = right_size;
	}
	return (size);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node from which we wish to measure
 * Return: int, balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int difference = 0;

	if (!tree)
	{
		return (0);
	}
	left = balance_helper(tree->left);
	right = balance_helper(tree->right);
	difference = left - right;
	return (difference);
}
