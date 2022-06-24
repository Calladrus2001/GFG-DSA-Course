#include<iostream>
#include<algorithm>
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

Node* InsertAtBegin(int x, Node *head){
    Node *temp = new Node(x);
    temp->next = head->next;
    head->next = temp;
    swap(temp->data, head->data);
    return head;
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    head = InsertAtBegin(100, head);
    printList(head);
}