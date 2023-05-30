#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree pre-order transversal
 * @tree: binary tree to pring
 * @func: pointer to function that prints the node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
