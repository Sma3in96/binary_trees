#include "binary_trees.h"
/**
* binary_tree_insert_right - create a new node in binary tree on the right
* @parent: pointer to the parant
* @value: the node value
* Return: pointer to new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *old;

	if (parent == NULL)
		return (NULL);
	old = parent->right;
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	parent->right = newnode;
	if (old)
	{
	newnode->right = old;
	old->parent = newnode;
	}
	return (newnode);
}
