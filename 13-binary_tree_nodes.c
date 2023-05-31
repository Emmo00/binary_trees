#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes of a binary tree with at least 1 child
 * @tree: pointer to root node of the binary tree
 * Return: number of nodes with at least one child
 * returns 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	else
		return (1 + (tree->left ? binary_tree_nodes(tree->left) : 0) +
				(tree->right ? binary_tree_nodes(tree->right) : 0));
}
