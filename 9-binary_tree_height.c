#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * Description: measures the height of a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height, max;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
	{
		max = left_height + 1;
		return (max);
	}
	else
	{
		max = right_height + 1;
		return (max);
	}
}
