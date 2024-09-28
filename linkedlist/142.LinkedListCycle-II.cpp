class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* temp = head;
        map<ListNode*,int> mpp;
        int idx = 0;

        while( temp != NULL){

            if(mpp.find(temp) != mpp.end()){
                return temp;
            }
            else{
                mpp.insert({temp, idx});
            };
            if(temp){
                temp = temp -> next;
            }
            idx++;
        };

      return NULL;  
    };
};