#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(){
    struct TreeNode* root = NULL;
    int value;

    root = insertNode(root, 25);
    insertNode(root, 30);
    insertNode(root, 35);
    insertNode(root, 40);
    insertNode(root, 45);
    insertNode(root, 50);
    insertNode(root, 55);
    insertNode(root, 60);

    printf("InOrder: ");
    inOrderTraversal(root);
    printf("\n");

    // printf("PreOrder: ");
    // preOrderTraversal(root);
    // printf("\n");

    // printf("PostOrder: ");
    // postOrderTraversal(root); 
    // printf("\n");

    deleteElement(root, 40);
    printf("Inorder: ");
    inOrderTraversal(root);
    printf("\n");

    deleteElement(root, 55);
    printf("Inorder: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}