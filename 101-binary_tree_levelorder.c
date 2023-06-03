#include "binary_trees.h"
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->parent)
	{
		binary_tree_levelorder(tree->parent->right, func);
		return;
	}
	binary_tree_levelorder(tree->left, func);
}
