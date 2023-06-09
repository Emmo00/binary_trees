#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right rotation on a binary tree
 * @tree: pointer to the binary tree node
 * Return: pointer to the new node at the location of the former
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->left)
		return (NULL);
	new_root = tree->left;
	if (new_root->right)
		new_root->right->parent = tree;
	tree->left = new_root->right;
	new_root->right = tree;
	tree->parent = new_root;
	new_root->parent = NULL;
	return (new_root);
}
