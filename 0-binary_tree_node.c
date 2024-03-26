#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/* Function to create a new binary tree node */
/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: Pointer to the parent node of the new node
 * @value: Value to be stored in the new node
 * Return: Pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)

	{
		fprintf(stderr, "Failed to allocate memory for new node\n");
		return (NULL); /* Return NULL on failure*/
	}

	new_node->value = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node); /* Return a pointer to the new node */
}

/* Example usage */
/**
 * main - Entry point of the program
 * Return: 0 on success, 1 on failure
 */

int main(void)
{
	/* Creating a binary tree node with value 10 and no parent  */
	binary_tree_t *root = binary_tree_node(NULL, 10);

	if (root == NULL)
	{
		fprintf(stderr, "Failed to create root node\n");
		return (1);
	}

	printf("Created binary tree node with value: %d\n", root->value);

	/* Freeing the memory allocated for the root node */
	free(root);
	return (0);
}
