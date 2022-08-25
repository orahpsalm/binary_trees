#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if node is a leaf
 * @node: The node to check
 * Return: 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
