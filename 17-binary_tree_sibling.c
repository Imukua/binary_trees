#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: A pointer to the node for which the sibling is to be found.
 *
 * Return: A pointer to the sibling node, or NULL if node is NULL, the parent
 * is NULL, or the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return(node->parent->right);

	else if (node->parent->right == node)
		return (node->parent->left);
	
	return (NULL);
}
