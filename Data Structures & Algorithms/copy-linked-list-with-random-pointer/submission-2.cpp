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

        unordered_map<Node*, Node*> seenNodes;

        Node* dummy = new Node(0);
        Node* prev = dummy;
        Node* curr = head;

        while (curr) {

            Node* newNode = new Node(curr->val);
            prev->next = newNode;

            seenNodes.emplace(curr, newNode);
            prev = prev->next;
            curr = curr->next;
        }
        curr = head;
        Node* deepCopied = dummy->next;
        while (curr) {
            Node* randomNode = seenNodes[curr->random];
            deepCopied->random = randomNode;
            curr = curr->next;
            deepCopied = deepCopied->next;
        }
        return dummy->next;
        
    }
};
