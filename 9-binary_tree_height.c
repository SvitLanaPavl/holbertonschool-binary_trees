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
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max(right_height, left_height) + 1);
}
/**
 * max - returns the max number
 * Description: max number
 * @a: first number
 * @b: second number
 * Return: greter number
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
