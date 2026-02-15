#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displaytree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displaytree(root->left);
    displaytree(root->right);
}
void displaynth(Node* root,int level,int n){
    if(level==n) return;
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->left = h;



    return 0;
}