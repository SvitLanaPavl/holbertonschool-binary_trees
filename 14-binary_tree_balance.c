#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * Description: measures the balance factor of a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL, balance factor otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_balance(tree->left) - binary_tree_balance(tree->right));
}
