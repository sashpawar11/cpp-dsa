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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddNode = new ListNode();
        ListNode* evenNode = new ListNode();

        ListNode* oddHead = oddNode;
        ListNode* evenHead = evenNode;


        int pos = 1;

        while( head != NULL){

            if(pos%2 != 0){
                ListNode* newNode = new ListNode(head -> val);
                oddHead -> next = newNode; 
                oddHead = newNode;
            }
            else{
                ListNode* newNode = new ListNode(head -> val);
                evenHead -> next = newNode; 
                evenHead = newNode;
            }
            if(head){
                head = head -> next;
            }
            pos++;
        }

        oddHead -> next = evenNode -> next;

        return oddNode-> next;

    };

};