#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if the binary tree is a perfect binary tree
 * @tree: Pointer to the tree
 * Return: 1 if is perfect or 0 if is not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_balanced, is_full;

	is_balanced = binary_tree_balance_2(tree);
	is_full = binary_tree_is_full_2(tree);

	if (is_balanced == 0 && is_full == 1)
		return (1);
	return (0);

}


/**
 * binary_tree_is_full_2 - Checks if the binary tree is a full binary tree
 * @tree: Pointer to the tree
 * Return: 1 if is full or 0 if is not full
 */

int binary_tree_is_full_2(const binary_tree_t *tree)
{
	int flag_1 = 1, flag_2 = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		flag_1 = binary_tree_is_full_2(tree->left);

	if (tree->right)
		flag_2 = binary_tree_is_full_2(tree->right);

	if (((!tree->right && !tree->left) || (tree->right && tree->left))
	    && flag_1 != 0 && flag_2 != 0)
		return (1);
	return (0);
}

/**
 * binary_tree_balance_2 - Checks the balance of a binary tree
 * @tree: Pointer to the tree
 * Return: Balance of the binary tree
 */

int binary_tree_balance_2(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_count = binary_tree_height_3(tree->left);
	if (tree->right != NULL)
		right_count = binary_tree_height_3(tree->right);

	return (left_count - right_count);
}


/**
 * binary_tree_height_3 - Gets the tree height in a binary tree
 * @tree: Pointer to the tree
 * Return: Height
 */

size_t binary_tree_height_3(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree->left)
		left_count = binary_tree_height_3(tree->left);

	if (tree->right)
		right_count = binary_tree_height_3(tree->right);

	if (right_count > left_count)
		return (right_count + 1);
	return (left_count + 1);
}
