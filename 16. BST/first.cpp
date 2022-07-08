#include<iostream>
using namespace std;

struct Node{
    Node* left;
    Node* right;
    int key;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};

