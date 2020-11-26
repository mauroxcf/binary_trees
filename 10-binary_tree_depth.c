#include "binary_trees.h"

/**
* binary_tree_depth - Function that measures the depth
* @tree: pointer to the root node of the tree to measure
* Return: height or 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth = 0;
	size_t right_depth = 0;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth > right_depth)
		return (left_depth + 1);

	else
		return (right_depth + 1);

}
