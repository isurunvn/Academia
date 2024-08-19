#ifndef LIBRARY_MANAGE_H
#define LIBRARY_MANAGE_H

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value);
struct TreeNode* insertNode(struct TreeNode* root, int value);
void inOrderTraversal(struct TreeNode* root);
void preOrderTraversal(struct TreeNode* root);
void postOrderTraversal(struct TreeNode* root);

#endif