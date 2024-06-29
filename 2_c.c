#include<stdio.h>
#include<malloc.h>
     struct node {
        int data;
        struct node* left;
        struct node* right;
    };
    // function declaration!
    struct node* createNode(int data){
        struct node* n;
        n = (struct node *)malloc(sizeof(struct node));
        n -> data= data;
        n-> left = NULL;
        n-> right = NULL;
        return n;

    }
     void preOrder(struct node* root ){
        if (root!= NULL){
            printf(" %d ", root-> data);
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    int main() {
        // Considering the root node with the made function
struct node *p = createNode(4);
struct node *p1 = createNode(3);
struct node *p2 = createNode(6);
struct node *p3 = createNode(1);
struct node *p4 = createNode(7);
// the tree looks like  this:
//       4
//      / \
//     3   6
//     / \
//    1   7
//   Helllo gaizzz
    //  Linking the root node with left and right children
    p -> left= p1;
    p -> right= p2;
    p1 -> left= p3;
    p1 -> right= p4;
   preOrder(p);
   return 0;
    }

       




    
