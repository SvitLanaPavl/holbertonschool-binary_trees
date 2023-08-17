#include "binary_trees.h"
/**
 * binary_tree_preorder - preorder traversal
 * Description: goes through a binary tree using preorder traversal
 * @tree: tree
 * @func: pointer to a function to call each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
