#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node as the right-child of
 * another node. If parent already has a right-child, the new node takes its
 * place, and the old right-child is set as the right child of the new node.
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure, or NULL if parent NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if ((!new) || (!parent))
	{
		return (NULL);
	}
	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	else
	{
		new->right = NULL;
	}
	parent->right = new;
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	return (new);
}
