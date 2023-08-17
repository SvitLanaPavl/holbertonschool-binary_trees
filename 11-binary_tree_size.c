#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * Description: measures the size of a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (size);
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->left);
	return (size);
}
