// pre order traversal
// root -> left -> right       
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node* left;
struct node* right;
};
// Function Declaration
struct node* createNode(int data) {
struct node *n; // creating a node pointer
n = (struct node *) malloc(sizeof(struct node));
n -> data= data;
n ->left = NULL;
n ->right = NULL;
return n;
}
// creating the function of pre order traversal
void preOrder(struct node* root) {
if (root!=NULL){
    printf("%d", root-> data);
    preOrder(root-> left);
    preOrder(root-> right);
}
}
// Constructing the root node with the above declared function
int main(){
struct node *p = createNode(5);
struct node *p1= createNode(3);
struct node *p2= createNode(7);
struct node *p3= createNode(2);
struct node *p4= createNode(4);
// Linking the root node with left and right children
p -> left = p1;
p -> right = p2;
p1 -> left = p3;
p1 -> right = p4;

preOrder(p);
return 0;


}