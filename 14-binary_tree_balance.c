#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hl, hr;

	if (!tree)
		return (0);
	hl = tree_height(tree->left);
	hr = tree_height(tree->right);
	return (hl - hr);
}

/**
 * tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height, or 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);
	hl = tree_height(tree->left);
	hr = tree_height(tree->right);
	if (hl > hr)
		return (hl + 1);
	else
		return (hr + 1);
}
