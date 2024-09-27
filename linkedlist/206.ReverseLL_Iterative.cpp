/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


// Iterative Approach to reverse LL 
    // Using Two Pointers

 //Time Complexity: O(N)
 // Memory Complexity: O(1)
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* current = head;
        ListNode* prev = nullptr;

        while(current != NULL){
            ListNode* temp = current -> next; // store link that is broken when reversed
            current -> next = prev;
            prev = current;
            current = temp;
        }
        return prev;


    }
};