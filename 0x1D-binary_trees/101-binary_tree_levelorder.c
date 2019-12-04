#include "binary_trees.h"

/**
 * levelorder_recur - Traverses the binary tree using level-order algorithm
 * @tree: Pointer to the tree
 * @height: Height of the tree
 * @func: Function
 * Return: Nothing
 */

void levelorder_recur(const binary_tree_t *tree,
		size_t height, void (*func)(int))
{
	if (height == 0)
		func(tree->n);
	else
	{
		levelorder_recur(tree->left, height - 1, func);
		levelorder_recur(tree->right, height - 1, func);
	}
}

/**
 * binary_tree_levelorder - Traverses the binary tree using level-order
 * @tree: Pointer to the tree
 * @func: Function
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		levelorder_recur(tree, i, func);
}

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
