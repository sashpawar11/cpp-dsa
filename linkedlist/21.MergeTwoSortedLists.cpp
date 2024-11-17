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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;

        ListNode* t1 = list1;
        ListNode* t2 = list2;

        while( t1 != NULL || t2 != NULL){

            int minimum = INT_MAX;

            if(t1){
                if( (t1->val) < minimum){
                    minimum = t1 -> val;
                }
            };

            if(t2){
                if( (t2->val) < minimum){
                    minimum = t2 -> val;
                }
            };

            if(t1){
                if(minimum == (t1->val)){
                        ListNode* newNode = new ListNode(t1 -> val);
                        curr -> next = newNode;
                        curr = newNode;
                }
                if(t2){
                      ListNode* newNode = new ListNode(t2 -> val);
                        curr -> next = newNode;
                        curr = newNode;
                }
            };
            else if(t2){
                if(minimum == (t2->val)){
                        ListNode* newNode = new ListNode(t2 -> val);
                        curr -> next = newNode;
                        curr = newNode;
                }
                if(t1){
                      ListNode* newNode = new ListNode(t1 -> val);
                        curr -> next = newNode;
                        curr = newNode;
                }
            };

            if(t2){
                ListNode* newNode = new ListNode(t2 -> val);
                curr -> next = newNode;
                curr = newNode;
            };

            if(t1) t1 = t1 -> next;
            if(t2) t2 = t2 -> next;
        };

        return dummyNode -> next;

    }
};