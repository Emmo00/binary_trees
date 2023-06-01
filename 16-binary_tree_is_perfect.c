#include <stdio.h>
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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the binary tree
 * Return: 1 if perfect , 0 otherwise or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree->left && !tree->right)
		return (1);
	if (tree == NULL)
		return (0);
	height_l = height(tree->left);
	height_r = height(tree->right);
	if (height_l < height_r)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &
				binary_tree_is_perfect(tree->right));
	if (tree->left)
		return (binary_tree_is_perfect(tree->left));
	return (0);
}
