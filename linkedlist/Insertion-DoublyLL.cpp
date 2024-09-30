/*
class Node {
    public:
    int value;
    Node* next;
    Node* prev;

    Node(int val): value(val), next(nullptr), prev(nullptr) {}
};
*/

class LinkedList {
    public:
    Node* head;
    Node* tail;

        void insertAtIndex(int index, int value) {
        // Complete this function
            Node* newNode = new Node(value);
            Node* curr = head;
            
            
            if( index == 0){
                newNode -> next = head;
                if(head != NULL){
                    
                    head -> prev = newNode;
                }
                head = newNode;
            }
            else{
                
                for(int i = 0; i < index - 1 ; i++){
                    curr = curr -> next;
                }
                
                newNode -> next = curr -> next;
                newNode -> prev = curr;
                if(curr -> next != NULL){
                    curr -> next -> prev = newNode;
                }

                curr -> next = newNode;
            }
        
    }            
    
    // Don't modify this function
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

