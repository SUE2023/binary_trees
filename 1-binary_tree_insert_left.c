#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NT;

	if (parent == NULL)
		return (NULL);

	NT = binary_tree_node(parent, value);
	if (NT == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		NT->left = parent->left;
		parent->left->parent = NT;
	}
	parent->left = NT;

	return (NT);
}
