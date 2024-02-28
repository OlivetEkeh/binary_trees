#include "binary_trees.h"

/**
 * binary_tree_size - this wpuld Calculate the size of a binary tree
 * @tree: the Pointer to the root node of the tree
 * Return: retuns Size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	if (!tree)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);

	return (1 + size_l + size_r);
}