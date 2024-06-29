#include <stdio.h>
#include <malloc.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
}
struct node* createNode(int data) {
    struct node *n; // Creating a Node pointer
    n = (struct node*) malloc(sizeof(struct node));
    n -> data= data;
    n -> left= NULL;
    n -> right= NULL;
    return n;
}
// creating the function of pre order traversal
void preOrder(struct node* root) {
    if(root!=NULL) {
        printf("%d", root -> data);
        preOrder(root -> left);
        preOrder(root -> right);
    }
    };
int main() {
    struct node *p = createNode(4);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(9);
    struct node *p5 = createNode(5);
    struct node *p6 = createNode(12);
    // linking the root node with left and right children
    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;
    p2 -> left = p5;
    p2 -> right = p6;
    preOrder(p);
    return 0;

}