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

Node* reverseInKGroups(Node* head, int k){
    Node* curr = head;
    Node* prevfirst; Node* next;
    bool isFirst = true;
    while (curr != NULL){
        Node* first = curr;
        Node* prev = NULL;
        int count = 0;
        while(curr != NULL && count < k){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count ++ ;
        }
        if (isFirst){
            head = prev;
            isFirst = false;
        }
        else {
            prevfirst->next = prev;
        }
        prevfirst = first;
    }
    return head;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    head = reverseInKGroups(head, 2);
    printList(head);
}