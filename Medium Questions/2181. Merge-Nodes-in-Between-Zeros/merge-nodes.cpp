
//  Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* mergeNodes(ListNode* head) {
    ListNode* first_zero = head;
    ListNode* next_zero = head->next;
    ListNode* new_head(0);
    int sum = 0;
    int counter = 0;
    while (next_zero) {
      if (next_zero->val == 0) {
        first_zero->next = new ListNode(sum);
        first_zero = first_zero->next;
        if (counter == 0) {
          new_head = first_zero;
          counter++;
        }
        if (!next_zero->next) {
          break;
        }

        first_zero->next = next_zero->next;
        sum = 0;
      }
      sum += next_zero->val;
      next_zero = next_zero->next;
    }
    return new_head;
  }
};