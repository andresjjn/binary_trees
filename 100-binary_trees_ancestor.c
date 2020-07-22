#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the lowest common
 * ancestor of two nodes
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node of the two given nodes.
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp = NULL;
	binary_tree_t *tmp2 = NULL;

	if (!first || !second)
		return (NULL);
	tmp = (binary_tree_t *)first;
	while (tmp != NULL)
	{
		tmp2 = (binary_tree_t *)second;
		while (tmp2 != NULL)
		{
			if (tmp == tmp2)
				return (tmp2);
			tmp2 = tmp2->parent;
		}
		tmp = tmp->parent;
	}
	return (NULL);
}
