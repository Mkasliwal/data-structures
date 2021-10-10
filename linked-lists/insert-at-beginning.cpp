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

void print() {
    // do something
    Node* temp = head;

    while(temp != NULL) {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
}

int main() {
    insert(2);
    insert(5);
    insert(6);
    insert(7);
    print();

    return 0;
}
