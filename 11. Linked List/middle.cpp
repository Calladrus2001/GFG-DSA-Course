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

void printMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next!= NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout << slow->data << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;
    printMiddle(head);
}