#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks of the node is leaf
 * Description: checks if the node is leaf
 * @node: node
 * Return: 1 if node is leaf, otherwise 0 or if the node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
return (0);
}
