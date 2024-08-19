#include "tree.h"
#include <stdio.h>
#include <string.h>

int main(){
    struct TreeNode *root = NULL;

    root = insertNode(root, 50);
    insertNode(root, 70);
    insertNode(root, 40);
    insertNode(root, 90);
    insertNode(root, 10);
    insertNode(root, 100);
    insertNode(root, 20);
    insertNode(root, 60);
    insertNode(root, 30);
    insertNode(root, 80);

    inOrderTraversal(root);
    printf("\n");
    preOrderTraversal(root);
    printf("\n");
    postOrderTraversal(root); 

    return 0;
}