#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree if it exits
 * @tree: root node of the tree to delete
 * Return: nothing at all. And if the tree is NULL, forget I even asked
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
