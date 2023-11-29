#include "binary_trees.h"
/**
* binary_tree_is_root - test  if  a  node is a root
* @node: pointer to the node
* Return: 1 is true
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
/**
* binary_tree_depth - mesure a depth from a node
* @tree: pointer to a root
* Return: int = height
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_root(tree))
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
