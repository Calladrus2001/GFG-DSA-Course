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

int maxLevel = 0;

void printLeft(Node* root, int level){
    if (root==NULL){
        return ;
    }
    if (maxLevel < level){
        cout << root->key << " ";
        maxLevel = level;
    }
    printLeft(root->left, level + 1);
    printLeft(root->right, level + 1);
    
}

void leftView(Node* root){
    printLeft(root, 1);
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
    leftView(root);
}