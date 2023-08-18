#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * Description: finds the sibling of a node
 * @node: node
 * Return: pointer to the sibling node, NULL if the node or parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (!node || !node->parent)
		return (NULL);
	if (node->left)
		return (node->right);
	if (node->right)
		return (node->left);
	temp = binary_tree_sibling(node->left);
	if (temp)
		return (temp);
	temp = binary_tree_sibling(node->right)
	return (temp);;
}
