#include<iostream>
#include<algorithm>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int heightOfTree(Node* root){
    if (root == NULL){
        return 0;
    }
    else {
        return max(heightOfTree(root->left), heightOfTree(root->right)) + 1;
    }
}

int isBalanced(Node* root){
    if (root == NULL){
        return 0;
    }
    int lh  = isBalanced(root->left);
    if (lh==-1){
        return -1;
    }
    int rh = isBalanced(root->right);
    if (rh==-1){
        return -1;
    }
    if (abs(lh-rh)>1){
        return -1;
    }
    else return max(lh,rh) + 1;
}

int main()
{
    Node *root = new Node(10);
    Node *Lchild = new Node(20);
    Node *Rchild = new Node(30);
    Node *LLchild = new Node(40);
    Node *LRchild = new Node(50);
    root->left = Lchild;
    root->right = Rchild;
    Lchild->left = LLchild;
    Lchild->right = LRchild;
    int res = isBalanced(root);
    cout << res << endl;
}