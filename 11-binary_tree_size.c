#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * Description: measures the size of a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->left));
}
