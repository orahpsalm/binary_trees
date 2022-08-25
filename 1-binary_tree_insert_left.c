#include "binary_trees.h"

/**
 * binary_tree_insert_left - Add node to the left
 * @parent: Pointer to the parent
 * @value: Value to add
 * Return: (Pointer to new node) or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *tmp = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left)
	{
		tmp = parent->left;
		node->left = tmp;
		tmp->parent = node;
	}

	parent->left = node;
	node->parent = parent;

	return (node);
}
