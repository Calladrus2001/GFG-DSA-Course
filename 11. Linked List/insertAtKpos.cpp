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

void insertAtKthPosition(int k, int data, Node* head){
    Node* curr = head;
    int pos = 0;
    while (pos != k-1){
        curr = curr->next;
        pos += 1;
    }
    Node *newNode = new Node(data);
    Node *temp = curr->next;
    curr->next = newNode;
    newNode->next = temp;
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    insertAtKthPosition(2, 100, head);
    printList(head);
}