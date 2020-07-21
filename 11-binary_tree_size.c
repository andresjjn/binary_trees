#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: The depth of a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
