#include <iostream>
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
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
}

Node* sortedInsert(Node* head, int data){
    Node* curr;
    Node *temp;
    if (head->data > data){
        curr->data = data;
        curr->next = head;
        return curr;
    }
    curr = head;
    while (curr->next->data < data){
        curr = curr->next;
    }
    temp->data = data;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    sortedInsert(head, 15);
    printList(head);
}