#include "binary_trees.h"

/**
 * binary_tree_insert_right -  this inserts a right_node as the
 * right-child of another node
 * @parent: the pointer to parent node
 * @value: tne value of new node
 * Return: the pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (!parent)
		return (NULL);

	rightNode = binary_tree_node(parent, value);
	if (!rightNode)
		return (NULL);

	if (parent->right)
	{
		rightNode->right = parent->right;
		parent->right->parent = rightNode;
	}
	parent->right = rightNode;

	return (rightNode);
}