#include "binary_trees.h"
/**
* binary_tree_balance - returns balance factor
* @tree: pointer to root
* Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		return (-binary_tree_height(tree->right));
	if (tree->right == NULL)
		return (binary_tree_height(tree->left));
	else
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
