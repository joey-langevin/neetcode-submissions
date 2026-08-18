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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* curr = head;
        ListNode* groupPrev = dummy;
        ListNode* groupNext;
        while (curr) {
            ListNode* kthNode = getKthNode(groupPrev, k);
            if (!kthNode) break;
            groupNext = kthNode->next;

            // reverse Kth group
            ListNode* prev = groupNext;

            for (int i = 0; i < k; ++i) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            ListNode* tmp = groupPrev->next;
            groupPrev->next = kthNode;
            groupPrev = tmp;
        }
        return dummy->next;
    }
    ListNode* getKthNode(ListNode* node, int k) {

        while (node && k > 0) {
            --k;
            node = node->next;
        }
        return node;
    }
};
