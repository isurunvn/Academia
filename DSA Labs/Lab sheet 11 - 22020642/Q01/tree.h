#ifndef TREE_H
#define TREE_H

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value);
struct TreeNode* insertNode(struct TreeNode* root, int value);
void preOrderTraversal(struct TreeNode* root);
void inOrderTraversal(struct TreeNode* root); 
void deleteElement(struct TreeNode* root, int value);

#endif