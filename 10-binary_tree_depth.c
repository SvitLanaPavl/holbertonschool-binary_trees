#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * Description: measures the depth of a node in a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (!tree)
		return (0);
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);
	return ((left_depth > right_depth) ? left_depth + 1 : right_depth + 1);
}
