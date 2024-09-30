

struct DoublyLLNode {

    int val;
    DoublyLL* prev;
    DoublyLL* next;

    DoublyLLNode(int val) : val(int val) , prev(nullptr), next(nullptr) {}
};