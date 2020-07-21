#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 *
 * @node: Pointer to the node to find the sibling.
 * Return: Pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (!node || !node->parent)
		return (NULL);
	tmp = node->parent;
	if (tmp->left == node)
		return (tmp->right);
	else
		return (tmp->left);
}
