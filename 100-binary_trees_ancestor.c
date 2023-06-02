#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node, NULL if none found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *i, *j;

	i = (binary_tree_t *)first;
	while (i)
	{
		j = (binary_tree_t *)second;
		while (j)
		{
			if (i == j)
				return (j);
			j = j->parent;
		}
		i = i->parent;
	}
	return (NULL);
}
