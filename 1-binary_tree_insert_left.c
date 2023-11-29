#include "binary_trees.h"
/**
* binary_tree_insert_left - create a new node in binary tree on the left
* @parent: pointer to the parant
* @value: the node value
* Return: pointer to new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *old;

	if (parent == NULL)
		return (NULL);
	old = parent->left;
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	parent->left = newnode;
	if (old)
	{
	newnode->left = old;
	old->parent = newnode;
	}
	return (newnode);
}
