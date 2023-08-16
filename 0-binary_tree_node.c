#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree
 * Description: creates a binary tree
 * @parent: pointer to the parent node
 * @value: value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
