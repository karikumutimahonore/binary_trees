#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 *@parent: is a pointer to the parent node of the node to create.
 *@value: is the value to put in the new node.
 * Return:Your function must return a pointer to the new node or NULL if no.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = malloc(sizeof(binary_tree_t));

	if (nd == NULL)
		return (NULL);
	nd->n = value;
	nd->parent = parent;
	nd->left = NULL;
	nd->right = NULL;
	return (nd);
}
