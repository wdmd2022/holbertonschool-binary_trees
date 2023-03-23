#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a binary tree node
 * @node: a pointer to the node which we are investigating
 * Return: a pointer to the sibling node. If there is no sibling,
 * returns NULL. If node is NULL or parent is NULL, it also returns
 * NULL in those circumstances.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib;

	if ((!node) || (!node->parent))
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		sib = node->parent->right;
	}
	else
	{
		sib = node->parent->left;
	}
	return (sib);
}
