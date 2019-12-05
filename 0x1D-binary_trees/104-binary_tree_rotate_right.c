#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree to the right
 * @tree: Pointer to the tree
 * Return: Root node or NULL if not exists
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node, *temp;

	if (tree == NULL)
		return (NULL);

	if (tree->left == NULL)
		return (tree);

	temp = tree->left;

	if (tree->left->right != NULL)
	{
		node = tree->left->right;
		node->parent = tree;
		tree->left = node;
	}
	else
		tree->left = NULL;

	temp->right = tree;
	tree->parent = temp;
	temp->parent = NULL;

	return (temp);
}
