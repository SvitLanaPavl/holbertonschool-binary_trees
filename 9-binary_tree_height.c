#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * Description: measures the height of a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
