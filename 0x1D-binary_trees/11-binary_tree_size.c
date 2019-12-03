#include "binary_trees.h"

/**
 * binary_tree_size - Gets the size of a binary tree
 * @tree: Pointer to the tree
 * Return: Size of a tree (0 is empty)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_count = binary_tree_size(tree->left);

	if (tree->right != NULL)
		right_count = binary_tree_size(tree->right);

	return (left_count + right_count + 1);
}
