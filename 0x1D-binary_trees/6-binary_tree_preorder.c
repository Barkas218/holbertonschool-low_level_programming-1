#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using preorder algorithm
 * @tree: Pointer to the tree
 * @func: Function to print the node
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}
