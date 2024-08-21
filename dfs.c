#include <stdio.h>
#include <stdlib.h>

// Definition of the binary tree node
struct TreeNode {
    int val;               // Value stored in the node
    struct TreeNode* left; // Pointer to the left child
    struct TreeNode* right; // Pointer to the right child
};

// Function to create a new tree node with a given value
struct TreeNode* newNode(int data) {
    // Allocate memory for a new node
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    
    // Set the node's value to the provided data
    node->val = data;
    
    // Initialize the left and right children as NULL
    node->left = NULL;
    node->right = NULL;
    
    // Return the pointer to the newly created node
    return node;
}

// Function to perform DFS using Preorder Traversal (Root-Left-Right)
void dfsPreorder(struct TreeNode* root) {
    if (root == NULL) return; // Base case: if the node is NULL, return
    
    // Visit the root node
    printf("%d ", root->val);
    
    // Recursively visit the left subtree
    dfsPreorder(root->left );
    
    // Recursively visit the right subtree
    dfsPreorder(root->right);
}

// Function to perform DFS using Inorder Traversal (Left-Root-Right)
void dfsInorder(struct TreeNode* root) {
    if (root == NULL) return; // Base case: if the node is NULL, return
    
    // Recursively visit the left subtree
    dfsInorder(root->left);
    
    // Visit the root node
    printf("%d ", root->val);
    
    // Recursively visit the right subtree
    dfsInorder(root->right);
}

// Function to perform DFS using Postorder Traversal (Left-Right-Root)
void dfsPostorder(struct TreeNode* root) {
    if (root == NULL) return; // Base case: if the node is NULL, return
    
    // Recursively visit the left subtree
    dfsPostorder(root->left);
    
    // Recursively visit the right subtree
    dfsPostorder(root->right);
    
    // Visit the root node
    printf("%d ", root->val);
}

// Driver code to test DFS traversals
int main() {
    // Creating the root node with value 1
    struct TreeNode* root = newNode(1);
    
    // Creating the left and right children of the root
    root->left = newNode(2);
    root->right = newNode(3);
    
    // Creating the children of the left child (2)
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
    // Creating the children of the right child (3)
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    printf("Preorder DFS traversal of the tree: ");
    dfsPreorder(root); // Output: 1 2 4 5 3 6 7
    printf("\n");

    printf("Inorder DFS traversal of the tree: ");
    dfsInorder(root); // Output: 4 2 5 1 6 3 7
    printf("\n");

    printf("Postorder DFS traversal of the tree: ");
    dfsPostorder(root); // Output: 4 5 2 6 7 3 1
    printf("\n");

    return 0;
}
