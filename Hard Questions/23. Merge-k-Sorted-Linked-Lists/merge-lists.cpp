struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* mergeKLists(vector<ListNode*>& lists) {
    if (lists.size() == 0) {
      return nullptr;
    }
    std::priority_queue<int, std::vector<int>, std::greater<int>> ans;
    ListNode* dummy = new ListNode();
    for (int i = 0; i < lists.size(); i++) {
      dummy = lists[i];
      while (dummy) {
        ans.push(dummy->val);
        dummy = dummy->next;
      }
    }
    delete dummy;
    dummy = new ListNode();
    ListNode* extra = dummy;
    while (!ans.empty()) {
      int value = ans.top();
      extra->next = new ListNode(value);
      extra = extra->next;
      ans.pop();
    }
    return dummy->next;
  }
};