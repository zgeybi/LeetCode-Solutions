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
    ListNode* root = new ListNode();
    ListNode* head = root;
    if (list1 == nullptr && list2 == nullptr) {
      return nullptr;
    } else if (list1 == nullptr) {
      return list2;
    } else if (list2 == nullptr) {
      return list1;
    }
    while (true) {
      if (list1 == nullptr) {
        head->next = list2;
        break;
      } else if (list2 == nullptr) {
        head->next = list1;
        break;
      }
      if (list1->val <= list2->val) {
        ListNode* node = new ListNode();
        node->val = list1->val;
        head->next = node;
        list1 = list1->next;
        head = head->next;
        continue;
      } else if (list1->val > list2->val) {
        ListNode* node = new ListNode();
        node->val = list2->val;
        head->next = node;
        list2 = list2->next;
        head = head->next;
        continue;
      }
      break;
    }
    return root->next;
  }
};