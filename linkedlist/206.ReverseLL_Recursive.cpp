#import<bits/stdc++.h>
using namespace std;


 //Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 


// Recursive Approach to reverse LL 

 //Time Complexity: O(N)  Linear Complexity
 // Memory Complexity: O(N) Linear Complexity (requires more memory space)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if( head == NULL){
            return NULL;
        };

        ListNode* newHead = head;

        if(head -> next != NULL)
        {
           newHead = reverseList(head -> next)
           head -> next -> next = head  // reverse link between next node and head
        };
        head -> next = nullptr;

        return newHead;

    }
};