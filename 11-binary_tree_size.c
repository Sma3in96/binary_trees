#include "binary_trees.h"
/**
* binary_tree_is_leaf - test  if  a  node is a leaf
* @node: pointer to the node
* Return: 1 is true
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
/**
* binary_tree_size - return size of tree
* @tree: pointer to root
* Return: int
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
