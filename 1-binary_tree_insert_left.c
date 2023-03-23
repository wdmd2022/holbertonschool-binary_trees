#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node as the left-child of
 * another node. If parent already has a left-child, the new node takes its
 * place, and the old left-child is set as the left child of the new node.
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure, or NULL if parent NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if ((!new) || (!parent))
	{
		return (NULL);
	}
	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	else
	{
		new->left = NULL;
	}
	parent->left = new;
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	return (new);
}
