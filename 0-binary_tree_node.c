#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: A pointer to the parent of the node to create
 * @value: The value to put in the new node
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NT;/* NT means new tree*/

	NT = malloc(sizeof(binary_tree_t));
	if (NT == NULL)
		return (NULL);

	NT->n = value;
	NT->parent = parent;
	NT->left = NULL;
	NT->right = NULL;

	return (NT);
}
