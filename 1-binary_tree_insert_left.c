#include "binary_trees.h"

/**
 * binary_tree_insert_left -  Function that inserts a
 * node as the left-child of another node
 *
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
		new_node->right = NULL;

	}
	else
	{
		parent->left = new_node;
		new_node->n = value;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
	}
	return (new_node);
}
