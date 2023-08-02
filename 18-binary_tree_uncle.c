#include "binary_trees.h"
/*
Write a function that finds the uncle of a node

	Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node);
	Where node is a pointer to the node to find the uncle
	Your function must return a pointer to the uncle node
	If node is NULL, return NULL
	If node has no uncle, return NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *gramps = node->parent->parent;

	if (gramps->right == node->parent)
		return (gramps->left);

	if (gramps->left == node->parent)
		return (gramps->right);

	return (NULL);

}
