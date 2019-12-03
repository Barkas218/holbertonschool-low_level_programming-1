#include "binary_trees.h"

/**
 * binary_tree_height - Gets the tree height in a binary tree
 * @tree: Pointer to the tree
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_count = binary_tree_height(tree->left);

	if (tree->right)
		right_count = binary_tree_height(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	if (right_count > left_count)
		return (right_count + 1);
	return (left_count + 1);

}
