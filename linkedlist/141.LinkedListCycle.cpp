/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* temp = head;

        map<ListNode*, int> mpp;
        
        while ( temp != NULL){
                
                if( mpp.find(temp) != mpp.end()){
                    return true;
                }
                else{
                     mpp.insert({temp,1});
                     temp = temp -> next;
                }
                
        }
        return false;

    }
};