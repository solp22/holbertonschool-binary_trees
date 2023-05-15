#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0, max_height = 0, i;

	if (!tree)
		return (0);
	while (tree->left != NULL)
	{
		tree = tree->left;
		height_l++;
	}
	for (i = 0; i < height_l; i++)
		tree = tree->parent;
	while (tree->right != NULL)
	{
		tree = tree->right;
		height_r++;
	}
	if (height_l >= height_r)
		max_height = height_l;
	else
		max_height = height_r;
	return (max_height);
}
