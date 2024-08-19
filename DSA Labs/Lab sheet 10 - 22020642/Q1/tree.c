#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

struct TreeNode* createNode(int value){
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* insertNode(struct TreeNode* root, int value){
    if (root == NULL){
        return createNode(value);
    }else{
        if (value < root->data){
            root->left = insertNode(root->left, value);
        }else if (value > root->data){
            root->right = insertNode(root->right, value);
        }
    }

    return root;
}

void inOrderTraversal(struct TreeNode* root){
    if(root == NULL){
        return;
    }else{
        inOrderTraversal(root->left);
        printf("%d\t", root->data);
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(struct TreeNode* root){
    if(root == NULL){
        return;
    }else{
        printf("%d\t", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(struct TreeNode* root){
    if(root == NULL){
        return;
    }else{
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d\t", root->data);
    }
}