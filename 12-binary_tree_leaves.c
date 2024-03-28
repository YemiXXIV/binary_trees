#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the tree to count number of leaves
 * Return: 0 if tree is NULL, count if otherwise
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_l, leaf_r;

	if (!tree)
		return (0);

	leaf_l = binary_tree_leaves(tree->left);
	leaf_r = binary_tree_leaves(tree->right);

	if (!tree->right && !tree->left)
		return (leaf_l + leaf_r + 1);
	else
		return (leaf_l + leaf_r);
}
