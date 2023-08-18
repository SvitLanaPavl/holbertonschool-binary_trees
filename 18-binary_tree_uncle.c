#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * Description: finds the uncle of a node
 * @node: node
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	parent = node->parent;
	grandparent = parent->parent;
	if (parent == grandparent->left)
		return (grandparent->right);
	else
		return (grandparent->left);
}
