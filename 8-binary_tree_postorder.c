#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * traversal, calling a function on each node as it goes along. In post-order
 * traversal, we recursively traverse the left subtree, and then recursively
 * traverse the right subtree, finally ending up at the root node.
 * @tree: pointer to the binary tree root node. If tree is NULL, we do nothing
 * @func: function pointer to a function that takes in an integer (the n value
 * of the node we are visiting, in this context) and returns nothing. If func
 * itself is NULL, we do nothing. We don't even traverse it.
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
