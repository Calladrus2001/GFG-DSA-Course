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
    if (head == NULL)
    {
        return;
    }

    cout << head->data << " ";
    head = head->next;
    return printList(head);
}

void InsertAtEnd(int x, Node *head)
{
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    Node *end = new Node(x);
    curr->next = end;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    InsertAtEnd(100, head);
    printList(head);
}