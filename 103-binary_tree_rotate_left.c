#include "binary_trees.h"
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->right)
		return (NULL);
	new_root = tree->right;
	if (new_root->left)
		new_root->left->parent = tree;
	tree->right = new_root->left;
	new_root->left = tree;
	tree->parent = new_root;
	return (new_root);
}
