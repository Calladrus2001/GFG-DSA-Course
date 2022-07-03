#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    cout << head->data << " ";
    head = head->next;
    return printList(head);
}

Node* reverseItr(Node* head){
    Node* curr = head;
    Node* prev;
    while (curr != NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;
    head = reverseItr(head);
    printList(head);
}