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
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
}

void printNth(Node* head, int n){
    Node* first = head;
    Node* second = head;
    while (n>1){
        first = first->next;
        n --;
    }
    while (first->next != NULL){
        first = first->next;
        second = second->next;
    }
    cout << second->data << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;
    printNth(head, 2);
}