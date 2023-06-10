#include "binary_trees.h"
/**
 * getTreeHeight - gets the max height of a binary tree
 * @tree: pointer to the root of the binary tree
 * Return: height of the tree
 */
int getTreeHeight(const binary_tree_t *tree)
{
	int heightLeft, heightRight;

	if (!tree)
		return (0);
	heightLeft = 1 + getTreeHeight(tree->left);
	heightRight = 1 + getTreeHeight(tree->right);
	return (heightLeft > heightRight ? heightLeft : heightRight);
}
/**
 * checkLevel - checks if a level of a binary tree is complete
 * @tree: pointer to the root of the binary tree
 * @level: level to check
 * Return: 1 if complete, else 0
 */
int checkLevel(const binary_tree_t *tree, int level)
{
	if (!tree)
		return (1);
	if (level == 0)
	{
		if (!tree->left && !tree->right)
			return (1);
		if (!tree->left && tree->right)
			return (0);
		if (tree->left && !tree->right)
			return (2);
		return (3);
	}
	else
	{
		if (checkLevel(tree->left, level - 1) == 2 &&
		checkLevel(tree->right, level - 1) > 1)
			return (0);
		return (1);
	}
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the binary tree
 * Return: 1 if complete, else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int height, level, is_complete;

	if (!tree)
		return (0);
	is_complete = 1;
	height = getTreeHeight(tree);

	for (level = 0; level < height; level++)
		is_complete = is_complete & (checkLevel(tree, level) > 0 ? 1 : 0);
	return (is_complete);
}
