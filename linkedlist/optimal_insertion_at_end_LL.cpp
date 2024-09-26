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

    Node* tail;

    
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        // If there are no nodes in the linked list
        // Set the new node as head and return
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        
        // Set next of tail to the new Node
        tail -> next = newNode;
        
        // Set new Node as the new tail
        tail = newNode;
        
    };

    
    
    void printValues() {
        if (head == NULL) {
            return;
        } else {
            Node* current = head;
            while (current != NULL) {
                cout << current -> value << ' ';
                current = current -> next;
            }
            cout << '\n';
        }
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