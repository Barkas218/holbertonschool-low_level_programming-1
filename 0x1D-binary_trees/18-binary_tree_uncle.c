#include "binary_trees.h"

/**
 * binary_tree_uncle - Gets the uncle node
 * @node: Pointer to the node
 * Return: Uncle node or NULL if error
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || parent == NULL || parent->parent == NULL)
		return (NULL);

	if ((parent->parent)->right == parent)
		return ((parent->parent)->left);

	return ((parent->parent)->right);
}
