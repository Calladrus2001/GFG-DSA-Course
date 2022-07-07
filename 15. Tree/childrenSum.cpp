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

bool childrenSum(Node* root){
    if (root == NULL){
        return true;
    }
    if (root->left == NULL && root->right == NULL){
        return true;
    }
    int sum = 0;
    if (root->left!=NULL){
        sum += root->left->key;
    }
    if (root->right!=NULL){
        sum += root->right->key;
    }
    return (root->key == sum && childrenSum(root->left) && childrenSum(root->right));
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
}