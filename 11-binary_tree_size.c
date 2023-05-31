#include "binary_trees.h"
/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: pointer to root node of the binary tree
 * Return: size of the binary tree, returns 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
