#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};
Node* head;

void insert(int value) {
    // do something
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(int value, int position) {
    // do something
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    
    Node* temp = head;
    for(int i=1; i<position-1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void print() {
    // do something
    Node* temp = head;

    while(temp != NULL) {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
}

int main() {
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    cout<<"Before Inserting at position >> "<<endl;
    print();
    insertAtPosition(10,3);
    cout<<"After Inserting at position >> "<<endl;
    print();

    return 0;
}
