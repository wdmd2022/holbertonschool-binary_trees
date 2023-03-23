#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - checks to see if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: int, 1 if perfect, 0 otherwise (if not perfect, or if NULL)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l;
	binary_tree_t *r;

	if (!tree)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	l = tree->left;
	r = tree->right;
	if ((!l) || (!r))
	{
		return (0);
	}
	if ((binary_tree_height(l)) == (binary_tree_height(r)))
	{
		if ((binary_tree_is_perfect(l)) && (binary_tree_is_perfect(r)))
		{
			return (1);
		}
	}
	return (0);
}
