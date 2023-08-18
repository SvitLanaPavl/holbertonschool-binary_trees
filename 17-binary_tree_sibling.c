#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * Description: finds the sibling of a node
 * @node: node
 * Return: pointer to the sibling node, NULL if the node or parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
