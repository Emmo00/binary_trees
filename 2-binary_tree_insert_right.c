#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node to the right of the parent
 * @parent: parent node
 * @value: value data in the tree node
 *
 * Return: pointer to the node inserted
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (parent->right != NULL && node != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	return (node);
}
