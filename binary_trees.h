#ifndef BINARY_TREE_H
#define BINARY_TREE_H

/**
 * struct binary_tree_s - Binary tree node structure
 * @value: Integer value stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 *
 * Description: Binary tree node structure with integer values.
 */

typedef struct binary_tree_s
{
	int value;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
}
binary_tree_t;

/* Function Prototype to create a new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif
