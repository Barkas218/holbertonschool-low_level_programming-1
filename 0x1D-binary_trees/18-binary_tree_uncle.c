#include "binary_trees.h"

/**
 * binary_tree_uncle - Gets the uncle node
 * @node: Pointer to the node
 * Return: Uncle node or NULL if error
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
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
