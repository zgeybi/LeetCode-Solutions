
// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    int length = 0;
    ListNode* main = head;
    ListNode* lag = head;

    while (length < n) {
      main = main->next;
      length++;
    }

    if (!main) {
      return head->next;
    }

    while (main->next) {
      main = main->next;
      lag = lag->next;
    }
    lag->next = lag->next->next;

    return head;
  }
};