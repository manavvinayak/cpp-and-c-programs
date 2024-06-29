#include<stdio.h>
#include<malloc.h>

    struct node {
        int data;
        struct node*left;
        struct node*right;
    };
    struct node* createNode(int data){
        struct node* n;
        n = (struct node *)malloc(sizeof(struct node));
        n -> data= data;
        n-> left = NULL;
        n-> right = NULL;
        return n;

    }
    int main() {
        struct node *p = createNode(9);
        struct node *p1 = createNode(6);
        struct node *p2 = createNode(10);
        // LINKING THE ROOT NODE TO THE LEFT AND RIGHT NODE
        p -> left = p1;
        p -> right = p2;
        return 0; 
    } 





    

