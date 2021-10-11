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

void deleteAtPosition(int position) {
    Node* temp = head;

    if(position == 1) {
        head = temp->next;
        delete temp;
        return;
    }
    
    for(int i=1; i<position-1;i++) {
        temp = temp->next; // temp [300]
    }

    Node* temp1 = temp->next; // temp1 [400]
    temp->next = temp1->next;
    delete temp1;    
}
/*        200      300      400      500     600
 [200]->[10|300]->[7|400]->[6|500]->[5|600]->[2|0]
  head      1        2        3        4       5
*/

int main() {
    insert(2);
    insert(5);
    insert(6);
    insert(7);
    insert(10);
    cout<<"Before deleting a node "<<endl; // 10 7 6 5 2
    print();
    deleteAtPosition(3);
    cout<<"After deleting a node "<<endl; // 10 7 5 2
    print();

    return 0;
}
