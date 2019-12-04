#include "binary_trees.h"

/**
 * binary_tree_leaves - Gets the number of leaves of a binary tree
 * @tree: Pointer to the tree
 * Return: Number of leaves (0 is empty)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (left_count + right_count);
}
