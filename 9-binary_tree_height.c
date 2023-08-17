#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * Description: measures the height of a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}
