#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * Description: measures the balance factor of a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL, balance factor otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
