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
    for (Node *p = head->next; p != head; p = p->next){
        cout << p->data << " ";
    }
}

void deleteKthcLL(Node* head, int k){
    int pos = 0;
    Node* temp = head;
    while (pos != k - 1 && pos != k){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    deleteKthcLL(head, 2);
    printList(head);
}