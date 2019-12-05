#include "binary_trees.h"

/**
 * binary_tree_sibling - Gets the sibling node
 * @node: Pointer to the node
 * Return: Sibling node or NULL if error
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->right == node)
		return (parent->left);

	return (parent->right);
}
