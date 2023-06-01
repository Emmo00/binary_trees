#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node to find the uncle
 * Return: pointer to uncle node or NULL if parent is NULL
 * or no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	parent = node->parent;
	grand_parent = parent->parent;
	return ((grand_parent->left == parent) ?
			grand_parent->right : grand_parent->left);
}
