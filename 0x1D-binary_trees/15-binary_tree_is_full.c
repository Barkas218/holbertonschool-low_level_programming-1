#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if the binary tree is a full binary tree
 * @tree: Pointer to the tree
 * Return: 1 if is full or 0 if is not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag_1 = 1, flag_2 = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		flag_1 = binary_tree_is_full(tree->left);

	if (tree->right)
		flag_2 = binary_tree_is_full(tree->right);

	if (((!tree->right && !tree->left) || (tree->right && tree->left))
	&& flag_1 != 0 && flag_2 != 0)
		return (1);
	return (0);
}
