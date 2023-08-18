#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * Description: checks if a binary tree is perfect
 * @tree: tree
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;
	size_t left_size, right_size;

	if (!tree)
		return (0);
	if (!tree->left && !tree->left)
		return (1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height != right_height)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	if (left_size != right_size)
		return (0);
	if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
		return (1);
return (0);
}
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
	if (!tree->left && !tree->right)
		return (0);
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
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
