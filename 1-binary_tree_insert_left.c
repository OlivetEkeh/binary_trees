#include "binary_trees.h"

/**
 * binary_tree_insert_left - This would insert node as the left-child of another node
 * @parent: this is the pointer to the node to insert the left_child
 * @value: this is the value to store in the new node 
 *
 * Return: Null on failure or pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	/* Allocate memory for the nn(new node) */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* If parent already has a left child, update */
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
