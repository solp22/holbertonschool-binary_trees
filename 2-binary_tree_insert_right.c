#include "binary_trees.h"
/**
 * binary_tree_insert_right -  inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: node inserted or NULL if it fails
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		tmp = parent->right;
		newnode->right = parent->right;
		parent->right = newnode;
		tmp->parent = newnode;
	}
	else
		parent->right = newnode;
	return (newnode);
}
