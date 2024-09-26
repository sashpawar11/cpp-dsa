#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr) {}
};

class LinkedList {
    public:
    Node* head;
    
    void insertAfterK(int value, int k) {

    Node* newNode = new Node(value);
    Node* current = head;
    
    // If there are no nodes in the linked list
    // Set the new node as head and return
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    // Iterate to the k-th node
    for (int i = 1; i < k; i++) {
        current = current -> next;
    };
    
    // Set the next of new Node to next of current
    
    newNode -> next = current -> next; // current -> next points to the k+1th element

    // Set the next of current to new Node
    current -> next = newNode;
    }
    
};

int main() {
    int n;
    cin >> n;
    
    LinkedList* list = new LinkedList();
    
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        list -> insertAtEnd(x);
        cout << list -> getLastValue() << ' ';
    }
}