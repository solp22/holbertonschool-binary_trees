#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the number of nodes with childs, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count + 1);
}


/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
