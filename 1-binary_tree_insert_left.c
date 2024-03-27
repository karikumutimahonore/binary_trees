#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child
 *@parent: a pointer to the node to insert the left-child in.
 *@value: the value to store in the new node.
 * Return: pointer to created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = NULL;

	if (parent == NULL)
		return (NULL);
	nd = malloc(sizeof(binary_tree_t));
	if (nd == NULL)
		return (NULL);
	nd->n = value;
	nd->parent = parent;
	nd->left = NULL;
	nd->right = NULL;
	if (parent->left == NULL)
		parent->left = nd;
	else
	{
		nd->left = parent->left;
		parent->left = nd;
		nd->left->parent = nd;
	}
	return (nd);
}
