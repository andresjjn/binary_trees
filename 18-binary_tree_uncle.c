#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 *
 * @node: Pointer to the node to find the uncle.
 * Return: Pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	tmp = node->parent;

	if (tmp->parent->left == tmp)
		return (tmp->parent->right);
	else
		return (tmp->parent->left);
}
