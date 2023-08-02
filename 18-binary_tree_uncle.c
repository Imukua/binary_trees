#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node in a binary tree.
 * @node: A pointer to the node for which the uncle is to be found.
 *
 * Return: A pointer to the uncle node, or NULL if node is NULL, the parent,
 * or the grandparent is NULL, or if the node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *gramps = node->parent->parent;

	if (gramps->right == node->parent)
		return (gramps->left);

	else if (gramps->left == node->parent)
		return (gramps->right);

}
