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
* binary_tree_height - mesure a height from a node
* @tree: pointer to a root
* Return: int = height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = tree->left ? binary_tree_height(tree->left) + 1 : 1;
	height_right = tree->right ? binary_tree_height(tree->right) + 1 : 1;
	return ((height_left > height_right) ? height_left : height_right);
}
/**
* binary_tree_balance - returns balance factor
* @tree: pointer to root
* Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
* binary_tree_is_full - check if tree is full
* @tree: pointer to the node
* Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	right = binary_tree_is_full(tree->right);
	left = binary_tree_is_full(tree->left);
	if (left == right)
		return (1);
	else
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
	{
		return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));
	}
	return (0);
}
