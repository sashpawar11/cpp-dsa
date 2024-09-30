struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
         
            ListNode* dummyNode = new ListNode(-1);
            ListNode* temp = dummyNode;

            if(head -> next == NULL){
                return head;
            }


            while(head != NULL){
                
                    if(head-> next != NULL){
                        if( head -> val == head -> next -> val){
                                ListNode* x = head;
                                head = head -> next;
                                temp -> next = head;
                                x -> next = nullptr;
                        }
                        else{
                            temp -> next = head;
                            temp = head;
                            head = head -> next;
                        }
                    }
            }

            return dummyNode -> next;

    }
};