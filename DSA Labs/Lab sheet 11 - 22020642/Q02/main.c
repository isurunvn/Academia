#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(){
    struct TreeNode* root = NULL;
    int value, count;

    printf("How many numbers do you want to add to the tree: ");
    scanf("%d",&count);

    for(int i=0; i<count; i++){
        printf("Enter value: ");
        scanf("%d",&value);

        root = insertNode(root, value);
    }

    printf("\nPre Order Traversal\n");
    preOrderTraversal(root);

    printf("\n\n");

    printf("In Order Traversal\n");
    inOrderTraversal(root); 

    printf("\n\nHow many values do you want to delete?: ");
    scanf("%d",&count);

    for(int i=0; i<count; i++){
        printf("Enter value to delete: ");
        scanf("%d",&value);
        struct TreeNode* temp2 = deleteElement(root, value);
    }
    
    printf("\n");

    printf("\nPre Order Traversal after deletion\n");
    preOrderTraversal(root);

    printf("\n\n");

    printf("In Order Traversal after deletion\n");
    inOrderTraversal(root);

    return 0;
}