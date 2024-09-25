#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}

};

class LinkedList {

    public :
    Node* head;


    void insertFront(int value){

    cout << 'Inserting' << value << endl;

    Node* newNode = new Node(value);

    newNode -> next = head;

    head = newNode;

    }

    int getHeadValue() {
        if (head == NULL) {
            return -1;
        }
        else {
            return head -> value;
        }
    }
};

int main()
{

    LinkedList* list = new LinkedList();

    list -> insertFront(3);

    cout << "The value at head is: " << list -> getHeadValue() << endl;

    list -> insertFront(1);

    cout << "The value at head is: " << list -> getHeadValue() << endl;

}
