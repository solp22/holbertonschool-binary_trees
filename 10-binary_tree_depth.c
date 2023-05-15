#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth value
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);

	depth = binary_tree_depth(tree->parent);

	if (tree->parent != NULL)
		depth = depth + 1;
	return (depth);
}
