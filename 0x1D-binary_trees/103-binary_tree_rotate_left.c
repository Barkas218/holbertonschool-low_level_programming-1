#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree to the left
 * @tree: Pointer to the tree
 * Return: Root node or NULL if not exists
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node, *temp;

	if (tree == NULL)
		return (NULL);

	if (tree->right == NULL)
		return (tree);

	temp = tree->right;

	if (tree->right->left != NULL)
	{
		node = tree->right->left;
		node->parent = tree;
		tree->right = node;
	}
	else
		tree->right = NULL;

	temp->left = tree;
	tree->parent = temp;
	temp->parent = NULL;

	return (temp);
}
