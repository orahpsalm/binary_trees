#include "binary_trees.h"

/**
 * binary_tree_height - Finds height of the tree
 * @tree: The binary tree
 * Return: 0, or the tree's height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = binary_tree_height(tree->left) + 1;

	if (tree->right)
		height_r = binary_tree_height(tree->right) + 1;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);

	return (0);
}



/**
 * binary_tree_balance - Function that measures balance factor of a binary tree
 * @tree: The tree
 * Return: int, a balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = binary_tree_height(tree->left) + 1;

	if (tree->right)
		height_r = binary_tree_height(tree->right) + 1;

	return (height_l - height_r);
}
