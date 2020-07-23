#include "binary_trees.h"
#include <stdbool.h>

/**
 * countNodes - This function counts the number of nodes in a binary tree
 *
 * @tree: Pointer to the first node.
 * Return:Number of nodes
 */
unsigned int countNodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + countNodes(tree->left) + countNodes(tree->right));
}

/**
 * isComplete -  This function checks if the binary tree is complete or not
 *
 * @tree: Pointer to the first node.
 * @index: Actual lever position in a binary tree.
 * @number_nodes: Total of nodes in a binary tree.
 * Return: false or true
 */
bool isComplete(const binary_tree_t *tree, unsigned int index,
		 unsigned int number_nodes)
{
	if (tree == NULL)
		return (true);
	if (index >= number_nodes)
		return (false);
	return (isComplete(tree->left, 2 * index + 1, number_nodes) &&
		isComplete(tree->right, 2 * index + 2, number_nodes));
}

/**
 * binary_tree_is_complete - Function that checks if a binary tree is complete
 *
 * @tree: Pointer to the first node.
 * Return: 1 if is complete, 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	unsigned int index = 0;
	unsigned int nodes_count = 0;
	bool complete = true;

	nodes_count = countNodes(tree);
	complete = isComplete(tree, index, nodes_count);
	if (complete == true)
		return (1);
	return (0);
}
