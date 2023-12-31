#include "binary_trees.h"
#include "binary_trees.h"
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
* binary_tree_leaves - counts the leaves of a tree
* @tree: pointer to a tree
* Return: count
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
/**
 * binary_tree_is_full - check if tree is full
 * @tree: pointer to the node
 * Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (binary_tree_leaves(tree) % 2 == 0)
        return (1);
    else
        return (0);
}
/**
 * binary_tree_sibling - check for sibling
 * @node: node
 * Return: pointer to a sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);
    if (binary_tree_is_full(node->parent) == 0)
        return (NULL);
    if (node->parent->left == node)
        return (node->parent->right);
    else
        return (node->parent->left);
}
