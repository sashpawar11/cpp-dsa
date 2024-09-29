#import<bits/stdc++.h>
#include <cstddef>
using namespace std;


// Optimized Solution using same LLs and Two-Pointers
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
        
//         ListNode* itr = head;
        
//         if(head -> next == NULL || head != NULL){
//             return head;
//         }

//         //fetch tail-1th node;
//         while(itr -> next -> next != NULL){
//             itr = itr -> next;
//         };

//         if(n == 1 ){
//             itr -> next = nullptr;
//         }
//         else{
//             for(int i = n; i >= 1; i--){
//                 itr = 
//             }

//         };
//     }
// };


// hashing soln

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        map<int,ListNode*> mpp;

        ListNode* itr = head;
        int pos = 1;

        if (head -> next == NULL){
            return nullptr;
        }

        while (itr -> next != NULL){
            mpp.insert({pos,itr});
            itr = itr -> next;
            pos = pos + 1;
        }


        // pos has now tail node index
        int idx_Calculated = pos - n;
        if( idx_Calculated == 0 ){
            idx_Calculated = 1;
        }
        ListNode* foundPtr = mpp.at(idx_Calculated);
        foundPtr -> next = foundPtr -> next -> next;


        return head;

    };

    int main(){

    ListNode* x = new ListNode(1);
    ListNode* y = x;
    y -> next = new ListNode(2);
    y = y -> next;
    int n = 1;

    ListNode* test = removeNthFromEnd(x, n);

    while(test->next != NULL){
        cout << test -> val << '-->';
        test = test -> next;
    };
}
};

