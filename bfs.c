#include <stdio.h>
#include <stdlib.h>

// Definition of the binary tree node
struct TreeNode {
    int val; // Value stored in the node
    struct TreeNode* left;  // Pointer to the left child
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

// Function to perform BFS and print nodes in a binary tree
void printBFS(struct TreeNode* root) {
    // If the tree is empty (root is NULL), there's nothing to print
    if (root == NULL) return;

    // Create a queue to hold nodes during BFS
    // Allocating memory for an array of TreeNode pointers
    struct TreeNode** queue = (struct TreeNode**)malloc(100 * sizeof(struct TreeNode*));
    
    // Initialize the front and rear pointers for the queue
    int front = 0, rear = 0;

    // Start by enqueuing the root node
    queue[rear++] = root;

    // Continue BFS as long as there are nodes in the queue
    while (front < rear) {
        // Dequeue the node at the front of the queue
        struct TreeNode* currentNode = queue[front++];
        
        // Print the value of the current node
        printf("%d ", currentNode->val);

        // If the current node has a left child, enqueue it
        if (currentNode->left != NULL) {
            queue[rear++] = currentNode->left;
        }

        // If the current node has a right child, enqueue it
        if (currentNode->right != NULL) {
            queue[rear++] = currentNode->right;
        }
    }

    // Free the memory allocated for the queue after BFS is done
    free(queue);
}

// Driver code to create a binary tree and test the BFS function
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

    // Print the BFS traversal of the tree
    printf("BFS traversal of the tree: ");
    printBFS(root);

    return 0; // Indicate successful program termination
}
