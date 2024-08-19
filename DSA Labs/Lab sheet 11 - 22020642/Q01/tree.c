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

void inOrderTraversal(struct TreeNode* root){
    if(root == NULL){
        return;
    }else{
        inOrderTraversal(root->left);
        printf("%d\t", root->data);
        inOrderTraversal(root->right);
    }
}

void deleteElement(struct TreeNode* root, int value){
    struct TreeNode* temp;
    struct TreeNode* temp2;
    temp = temp2 = root;
    while (temp->data != value){
        temp2 = temp;
        temp = temp->right;
    }
    temp2->right = temp->right;
    free(temp);
}