#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: node inserted or NULL if it fails
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		tmp = parent->left;
		newnode->left = parent->left;
		parent->left = newnode;
		tmp->parent = newnode;
	}
	else
		parent->left = newnode;
	return (newnode);
}
