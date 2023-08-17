#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * Description: inserts a node
 * @parent: pointer to the node to insert the left child in
 * @value: value
 * Return: pointer to the created node, NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent || !new)
		return (NULL);
	new = binary_tree_node(parent, value);
	while (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;

	}
	parent->left = new;
return (new);
}
