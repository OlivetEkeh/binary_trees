#include "binary_trees.h"

/**
 * binary_tree_depth - this would measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: returnsdepth or 0 If tree is NULL
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree && tree->parent)
	{
		depth += (1 + binary_tree_depth(tree->parent));
		return (depth);
	}

	return (0);
}