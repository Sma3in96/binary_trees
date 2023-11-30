#include "binary_trees.h"
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
