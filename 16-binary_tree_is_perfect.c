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
 * binary_tree_is_perfect - check if a tree is perfect
 * @tree: pointer to a tree
 * Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (binary_tree_balance(tree) != 0)
        return (0);
    if (binary_tree_is_leaf(tree))
        return (1);
    if (binary_tree_is_full(tree))
    	return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
