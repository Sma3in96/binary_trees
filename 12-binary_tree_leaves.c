#include "binary_trees.h"
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
