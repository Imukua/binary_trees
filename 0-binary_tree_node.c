#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary tree node
* @parent: pointer to the parent node
* @value: The value to give the new node.
*
* return: The pointer to the new node.
*/  
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->n = value;

    return (new_node);

}
