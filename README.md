          000 00  0 00
      00 0\/0\|0 ()|/ @, 00
      0\/(/0/0||/0 /_/)_0/_0
   0() 0\/0|()|/0\/ '%" 0 ()
  0_\_00_\ |0 |00/0__%_/_0 00
00   00 0 0| 0| /0 0 % ()0 /00
 ()0_---()0\0\|00-00--%---()~
     00     \|||
             |||
             |||
             |||
       , -=-~  .-^- _
              `
Learning Objectives
General
What is a binary tree
What is the difference between a binary tree and a Binary Search Tree
What is the possible gain in terms of time complexity compared to linked lists
What are the depth, the height, the size of a binary tree
What are the different traversal methods to go through a binary tree
What is a complete, a full, a perfect, a balanced binary tree
Environment
C programming language C programming language C programming language

Language: C
OS: Ubuntu 20.04 LTS
Editor: VIM 8.1.2269
Compiler: gcc 9.3.0
compilation flags: -Wall -Werror -Wextra -pedantic -std=gnu89
Style guidelines: Betty style
Basic binary tree

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
function prototypes

File	Prototype
binary_tree_print.c	void binary_tree_print(const binary_tree_t *tree)
0-binary_tree_node.c	binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
1-binary_tree_insert_left.c	binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
2-binary_tree_insert_right.c	binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
3-binary_tree_delete.c	void binary_tree_delete(binary_tree_t *tree);
4-binary_tree_is_leaf.c	int binary_tree_is_leaf(const binary_tree_t *node);
5-binary_tree_is_root.c	int binary_tree_is_root(const binary_tree_t *node);
6-binary_tree_preorder.c	void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
7-binary_tree_inorder.c	void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
8-binary_tree_postorder.c	void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
9-binary_tree_height.c	size_t binary_tree_height(const binary_tree_t *tree);
10-binary_tree_depth.c	size_t binary_tree_depth(const binary_tree_t *tree);
11-binary_tree_size.c	size_t binary_tree_size(const binary_tree_t *tree);
12-binary_tree_leaves.c	size_t binary_tree_leaves(const binary_tree_t *tree);
13-binary_tree_nodes.c	size_t binary_tree_nodes(const binary_tree_t *tree);
14-binary_tree_balance.c	int binary_tree_balance(const binary_tree_t *tree);
15-binary_tree_is_full.c	int binary_tree_is_full(const binary_tree_t *tree);
16-binary_tree_is_perfect.c	int binary_tree_is_perfect(const binary_tree_t *tree);
17-binary_tree_sibling.c	binary_tree_t *binary_tree_sibling(binary_tree_t *node);
18-binary_tree_uncle.c	binary_tree_t *binary_tree_uncle(binary_tree_t *node);
100-binary_trees_ancestor.c	binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
101-binary_tree_levelorder.c	void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
102-binary_tree_is_complete.c	int binary_tree_is_complete(const binary_tree_t *tree);
103-binary_tree_rotate_left.c	binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
104-binary_tree_rotate_right.c	binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
110-binary_tree_is_bst.c	int binary_tree_is_bst(const binary_tree_t *tree);
111-bst_insert.c	bst_t *bst_insert(bst_t **tree, int value);
112-array_to_bst.c	bst_t *array_to_bst(int *array, size_t size);
113-bst_search.c	bst_t *bst_search(const bst_t *tree, int value);
114-bst_remove.c	bst_t *bst_remove(bst_t *root, int value);
120-binary_tree_is_avl.c	int binary_tree_is_avl(const binary_tree_t *tree);
121-avl_insert.c	avl_t *avl_insert(avl_t **tree, int value);
122-array_to_avl.c	avl_t *array_to_avl(int *array, size_t size);
avl_t *avl_remove(avl_t *root, int value);
avl_t *sorted_array_to_avl(int *array, size_t size);
int binary_tree_is_heap(const binary_tree_t *tree);
heap_t *heap_insert(heap_t **root, int value);
heap_t *array_to_heap(int *array, size_t size);
int heap_extract(heap_t **root);
int *heap_to_sorted_array(heap_t *heap, size_t *size);

About
🌳 🍀 A project written in partial fulfillment of ALX program to understand the the possible gain in terms of time complexity compared to linked lists

Topics
avl-tree binary-search-tree binary-tree max-binary-heap
Resources
 Readme
 Activity
Stars
 0 stars
Watchers
 1 watching
Forks
 2 forks
Report repository
Releases
No releases published
Packages
No packages published
Languages
C
100.0%
Footer
© 2023 GitHub, Inc.
typedef struct binary_tree_s binary_tree_t;
Autor
Uchechukwu Ogbodo

