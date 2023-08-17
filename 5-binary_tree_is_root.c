#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * Description: checks of the given node is a root
 * @node: node
 * Return: 1 if the root, otherwise 0 or if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->left && node->right)
		return (1);
return (0);
}
