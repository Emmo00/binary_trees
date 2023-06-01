#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the binary tree
 * Return: 1 if perfect , 0 otherwise or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &
				binary_tree_is_perfect(tree->right));
	if (!tree->left && !tree->right)
	{
		binary_tree_t *parent;

		parent = tree->parent;
		if (!parent)
			return (0);
		if (tree == parent->left)
			if (parent->right->left || parent->right->right)
				return (0);
		return (1);
	}
	return (0);
}
