#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - finds the uncle of a binary tree node
 * @node: pointer to the node for whose uncle we are searching
 * Return: pointer to the uncle node. No uncle? Return NULL. Node NULL?
 * I bet you can guess what we do. But to be explicit: we return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}
