#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * (i.e., visit the root first, then recursively traverse the left subtree,
 * then recursively traverse the right subtree). Applies a function as it goes
 * @tree: a pointer to the root node of the tree to traverse. If NULL, do
 * nothing
 * @func: function pointer, pointing to function that we will call for each
 * node. The value in the node (an integer) must be passed as a parameter to
 * this function, which in turn does not return anything. If func itself is
 * NULL, then the function should do nothing at all.
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
