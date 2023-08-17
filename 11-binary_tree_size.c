#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * Description: measures the size of a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);
	return (left_height + 1 + right_height);
}
