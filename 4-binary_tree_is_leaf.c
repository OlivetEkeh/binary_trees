#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this would check if a node is a leaf
 * @node: this is the pointer to node to check
 * Return:  1 if node is a leaf, otherwise it returns 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}

