#include "binary_trees.h"
/**
 * maxValue - finds the max value of a binary subtree
 * @node: pointer to root of subtree
 * Return: max node value in subtree
 */
int maxValue(binary_tree_t *node)
{
	int max, max_left, max_right;

	if (!node)
		return (0);
	max_left = maxValue(node->left);
	max_right = maxValue(node->right);
	max = (max_left > max_right) ? max_left : max_right;
	if (max < node->n)
		max = node->n;
	return (max);
}
/**
 * minValue - finds the min value of a binary subtree
 * @node: pointer to root of subtree
 * Return: min node value in subtree or a ridiculously large number
 */
int minValue(binary_tree_t *node)
{
	int min, min_left, min_right;

	if (!node)
		return (1000000000);
	min_left = minValue(node->left);
	min_right = minValue(node->right);
	min = (min_left < min_right) ? min_left : min_right;
	if (min > node->n)
		min = node->n;
	return (min);
}
/**
 * is_bst - checks of a binary tree is a binary search tree
 * @tree: pointer to root of the binary tree
 * Return: 1 if it is, 0 if not
 * returns 1 if tree is NULL
 */
int is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (tree->left && maxValue(tree->left) > tree->n)
		return (0);
	if (tree->right && minValue(tree->right) < tree->n)
		return (0);
	if (!is_bst(tree->left) || !is_bst(tree->right))
		return (0);
	return (1);
}
/**
 * binary_tree_is_bst - checks if a binary tree is a binary search tree
 * @tree: pointer to root node of the tree
 * Return: 1 if the tree is a bst, else 0
 * returns 0 if tree is NULL
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree));
}
