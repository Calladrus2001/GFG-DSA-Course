#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node (int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

int main(){
    Node* head = new Node(10);
    Node* temp1 = new Node(10);
    Node* temp2= new Node(10);
    head->next = temp1;
    head->prev = NULL;
    temp1->next = temp2;
    temp1->prev = head;
    temp2->next = NULL;
    temp2->prev = temp1;
}