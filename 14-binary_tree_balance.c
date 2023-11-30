#include "binary_trees.h"
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
