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

int sum(Node* root){
    int sumtree=0;
    if(root==NULL) return 0;
    sumtree = root->val + sum(root->left) + sum(root->right);

    return sumtree;
}

int size(Node* root){
    int s = 0;
    if(root==NULL) return 0;
    s++;
    s = s + size(root->left) + size(root->right);

    return s;
}

int maxval(Node* root){
    if(root==NULL) return INT_MIN;
    int a = max(root->val,max(maxval(root->left),maxval(root->right)));

    return a;
}

int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}

// int heightForDiameter(Node* root){
//     int maxDiameter = 0;
//     if(root==NULL) return 0;
//     int leftHeight = heightForDiameter(root->left);
//     int rightHeight = heightForDiameter(root->right);
//     maxDiameter = max(maxDiameter, leftHeight + rightHeight);
//     return 1 + max(leftHeight, rightHeight);
// }

int diameter(Node* root){
    if(root==NULL) return 0;
    int maxDiameter = 0;
    int leftHeight = diameter(root->left);
    int rightHeight = diameter(root->right);
    maxDiameter = max(maxDiameter, leftHeight + rightHeight);
    return 1 + max(leftHeight, rightHeight);
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

    displaytree(a);
    cout<<"\n";
    int ans = sum(a);
    cout<<ans<<"\n";\
    int sizetree = size(a);
    cout<<sizetree<<"\n";
    int ans2 = maxval(a);
    cout<<ans2<<"\n";
    int level = levels(a);
    cout<<level<<"\n";
    int val = diameter(a);
    cout<<val<<"\n";
    int sub1 = levels(a->left);
    int sub2 = levels(a->right);
    int value = sub1 + sub2 + 1;
    cout<<value<<"\n";

    return 0;
}