#include "binary_trees.h"

/**
 * binary_tree_uncle - Gets the uncle node
 * @node: Pointer to the node
 * Return: Uncle node or NULL if error
 */

size_t binary_tree_uncle(const binary_tree_t *tree)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL ||
			(node->parent)->parent == NULL)
		return (NULL);

	parent = node->parent;

	if ((parent->parent)->right == parent)
		return ((parent->parent)->left);

	return ((parent->parent)->right);
}
