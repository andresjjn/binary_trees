#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least 1
 * child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: The number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int i = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		i++;
	i += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (i);
}
