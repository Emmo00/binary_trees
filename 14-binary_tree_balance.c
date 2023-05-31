#include "binary_trees.h"
/**
 * height - finds the height of a binary subtree
 * @tree: root node of the binary tree
 * Return: height of the subtree
 */
int height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (-1);
	height_left = (tree->left) ? 1 + height(tree->left) : 0;
	height_right = (tree->right) ? 1 + height(tree->right) : 0;
	return ((height_left > height_right) ? height_left : height_right);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of the binary tree
 * Return: balance factor ( height of left - height of right)
 * returns 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
