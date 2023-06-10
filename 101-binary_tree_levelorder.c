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
 * performOnLevel - performs a function on a level of a binary tree
 * @tree: pointer to the root of the binary tree
 * @level: level to perform the function on
 * @func: pointer to function to be performed
 * Return: nothing
 */
void performOnLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 0)
		func(tree->n);
	else
	{
		performOnLevel(tree->left, level - 1, func);
		performOnLevel(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order transversal
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to function to be performed
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, level;

	if (!tree || !func)
		return;
	height = getTreeHeight(tree);

	for (level = 0; level < height; level++)
		performOnLevel(tree, level, func);
}
