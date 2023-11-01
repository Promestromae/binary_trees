#include "binary_trees.h"

/**
 * binary_tree_node - Function creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaration of the new node with its data type */
	binary_tree_t *newNode;

	/* allocate memory for the new node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign values to the properties of the nodes */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
