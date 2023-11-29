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
	if (binary_tree_is_leaf(tree))
		return (0);
	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;
	return ((height_left > height_right) ? height_left : height_right);
}
