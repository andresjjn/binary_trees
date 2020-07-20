#include "binary_trees.h"

/**
 * binary_tree_insert_right -  Function that inserts a
 * node as the right-child of another node
 *
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
		new_node->left = NULL;

	}
	else
	{
		parent->right = new_node;
		new_node->n = value;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
	}
	return (new_node);
}
