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

// Time Complexity -> O(max(N1, N2))
// Space Complexity -> O(max(N1, N2))

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
            ListNode* dummyNode = new ListNode(-1);
            ListNode* curr = dummyNode;
            

            ListNode* t1 = l1;
            ListNode* t2 = l2;
            
            int carryOver = 0;

            while( t1 != NULL || t2 != NULL ) {

                    int sum = carryOver;


                    if(t1) sum+= t1 -> val;
                    if(t2) sum+= t2 -> val;

                    ListNode* newNode = new ListNode(sum % 10);

                    carryOver = sum / 10;

                    curr -> next = newNode;
                    curr = curr -> next;
                    
                    if (t1){
                         t1 = t1 -> next;
                    };
                      if (t2){
                          t2 = t2 -> next;    
                    };
                         
            }
            if (carryOver != 0){
                curr -> next = new ListNode(carryOver);
            }

            return dummyNode -> next;


    }
};