#include <bits/stdtr1c++.h>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// approach does not work : 09/30
class Solution {
public:
  ListNode *removeNodes(ListNode *head) {

    vector<int> v;
    ListNode *t1 = head;

    if (head->next == NULL) {
      return;
    }

    while (t1 != NULL) {
      v.push_back(t1->val);
      t1 = t1->next;
    }

    sort(v.begin(), v.end(), greater<>());

    ListNode *t2 = head;

    for (const auto &i : v) {
      t2->val = i;
      if (t2 != NULL) {
        t2 = t2->next;
      }
    }
  }
};
