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
    void reorderList(ListNode* head) {
        
        vector<ListNode*> vec;
        ListNode* curr = head;

        while (curr)
        {
            cout << curr->val << endl;
            vec.push_back(curr);
            curr = curr->next;
        }

        int left = 0;
        int right = vec.size() - 1;
        while (left < right)
        {
            vec[left]->next = vec[right];
            left++;
            if (left == right) 
                break;
            vec[right]->next = vec[left];
            --right;
        }
        vec[left]->next = nullptr;

    }
};
