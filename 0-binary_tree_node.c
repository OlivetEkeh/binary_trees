#include "binary_trees.h"

/**
 * binary_trees_node - This pointer creates a binary tree node
 * @parent: This is the pointer to the perent node
 * @value: The value which is the new node
 * Return: Null on failure or pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
