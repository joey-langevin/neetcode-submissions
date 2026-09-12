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

// 2, 4, 6, 8
    void reorderList(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* h1 = head;
        ListNode* h2 = slow->next;

        // reorder second half 
        ListNode* prev = nullptr;
        while (h2) {
            ListNode* temp = h2->next;
            h2->next = prev;
            prev = h2;
            h2 = temp;
        }
        h2 = prev;

        while (h2) {
            ListNode* temp = h1->next;
            ListNode* temp2 = h2->next;
            h1->next = h2;
            h2->next = temp;
            h1 = temp;
            h2 = temp2;
        }
        h1->next = nullptr;
    }
};



