#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Creating node
Node* createNode(int data){
    Node *node;
    //Memory Allocation
    node = (struct Node *) malloc(sizeof(struct Node)); 
    
    //Setting Data
    node->data = data;

    //Left and Right Childs NUlL
    node->left = NULL;
    node->right = NULL;

    return node;

}

void preOrder(Node *root){
    if(root!=NULL){
        cout << root->data << endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << endl;
    }
    
}
void inOrder(Node *root){
    if(root != NULL){
        inOrder(root->left);
        cout << root->data << endl;
        inOrder(root->right);

    }
}
int main(){
    Node *p1 = createNode(2);
    Node *p2 = createNode(1);
    Node *p3 = createNode(4);


    /*
        What our tree looks like;
            2
           / \
          1   4 

    */

    //Linked the nodes
    p1->left = p2;
    p1->right = p3;
    cout << "Pre Order Transversal\n";
    preOrder(p1);

    cout << "\nPost Order Transversal\n";
    postOrder(p1);
    cout << "\nIn Order Transversal\n";
    inOrder(p1);

    return 0;
}