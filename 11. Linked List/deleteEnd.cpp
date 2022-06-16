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

void deleteEnd(Node* head){
    Node *curr = head;
    while (curr->next->next != NULL){
        curr = curr->next;
    }
    curr->next = NULL;
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    deleteEnd(head);
    printList(head);
}