#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree && tree->left)
	{
		binary_tree_t *new_root;

		new_root = tree->left;
		new_root->parent = NULL;
		tree->parent = new_root;
		tree->left = new_root->right;
		if (tree->left)
			tree->left->parent = tree;
		new_root->right = tree;

		return (new_root);
	}
	return (NULL);
}
