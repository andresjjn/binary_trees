#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Find the depth of a tree
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: The depth of a tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
	{
		return (0);
	}
	return (1 + binary_tree_depth(tree->parent));
}
