#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int hl, hr;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	else if (tree->right && tree->left)
	{
		hl = binary_tree_is_full(tree->left);
		hr = binary_tree_is_full(tree->right);
		return (hl && hr);
	}
	return (0);
}
