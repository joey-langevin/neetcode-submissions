/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (!head) return nullptr;

        Node* newHead = new Node(head->val);
        Node* old = head->next;
        Node* curr = newHead;
        while (old) {
            curr->next = new Node(old->val);
            old = old->next;
            curr = curr->next;
        }
        old = head;
        curr = newHead;
        while (old) {
            Node* oldTemp = head;
            Node* newTemp = newHead;
            while (oldTemp) {
                if (oldTemp == old->random) {
                    curr->random = newTemp;
                    break;
                }
                oldTemp = oldTemp->next;
                newTemp = newTemp->next;
            }
            old = old->next;
            curr = curr->next;
        }
        return newHead;
        
    }
};
