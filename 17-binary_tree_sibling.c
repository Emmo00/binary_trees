#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node to find the sibling
 * Return: pointer to sibling node or NULL if parent is NULL
 * or no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	return ((parent->left == node) ? parent->right : parent->left);
}
