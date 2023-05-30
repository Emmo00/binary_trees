#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node to the left of the parent
 * @parent: parent node
 * @value: value data in the tree node
 *
 * Return: pointer to the node inserted
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);
	if (parent == NULL || node == NULL)
		return (NULL);
	parent->left = node;
	return (node);
}
