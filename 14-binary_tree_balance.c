#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: Height of a binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - Function that measures the balance factor of
 * a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: balance factor of a binary tree or NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	else
		left = 0;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	else
		right = 0;
	return (left - right);
}
