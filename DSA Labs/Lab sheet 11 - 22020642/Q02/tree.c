#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct TreeNode* createNode(int value){
    struct TreeNode* newNode = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct TreeNode* insertNode(struct TreeNode* root, int value){
    if(root == NULL){
        return createNode(value);
    }else{
        if(value < root->data){
            root->left = insertNode(root->left, value);
        }else if(value > root->data){
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

struct TreeNode*  rightMostChildInLeftSubtree(struct TreeNode* temp){
    while (temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

struct TreeNode* deleteElement(struct TreeNode* root, int value){
    if (root == NULL){
        return root;
    }else if(root->data > value){
        root->left = deleteElement(root->left, value);
    }else if(root->data < value){
        root->right = deleteElement(root->right, value);
    }else{
        if (root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        } else if(root->right == NULL && root->left != NULL){
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        } else if(root->left == NULL && root->right != NULL){
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        }else{
            struct TreeNode* temp = rightMostChildInLeftSubtree(root->left);
            root->data = temp->data;
            root->left = deleteElement(root->left, temp->data);
            return root;
        }
    }
}