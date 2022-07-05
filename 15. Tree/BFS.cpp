#include<iostream>
using namespace std;

// one approach is to find the height of the tree, and then iteratively 
// print all elements at each level (<=k). Time: O(h*n)

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

void printNodesAtKDistance(Node* root, int k){
    if (root == NULL){
        return ;
    }
    if (k == 0){
        cout << root->key << " ";
        return ;
    }
    else {
        printNodesAtKDistance(root->left, k-1);
        printNodesAtKDistance(root->right, k-1);
    }
}

void levelOrder(Node* root){
    int height = heightOfTree(root);
    for(int i = 0; i < height; i++){
        printNodesAtKDistance(root, i);
        cout << "\n";
    }
}

int main()
{
    Node *root = new Node(10);
    Node *Lchild = new Node(20);
    Node *Rchild = new Node(30);
    Node *LLchild = new Node(40);
    root->left = Lchild;
    root->right = Rchild;
    Lchild->left = LLchild;
    levelOrder(root);
}