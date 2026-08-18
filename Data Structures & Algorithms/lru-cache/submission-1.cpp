class Node {
public:
    Node(int k, int v) : key(k) , value(v) {}
    int key;
    int value;
    Node* next = nullptr;
    Node* prev = nullptr;
};
// Left is least Recent , Right is most recent
class LRUCache {
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        left = new Node(0, 0);
        right = new Node(0, 0);
        left->next = right;
        right->prev = left;
    }
    
    int get(int key) {
        if (hashMap.find(key) != hashMap.end()) {
            remove(hashMap[key]);
            insert(hashMap[key]);
            return hashMap[key]->value;
        }
        return -1;
    }
    // removes node from Doubly Linked list
    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    // adds node to linked list
    void insert(Node* node) {
        right->prev->next = node;
        node->prev = right->prev;
        node->next = right;
        right->prev = node;
    }
    
    void put(int key, int value) {
        if (hashMap.find(key) != hashMap.end()) {
            remove(hashMap[key]);
        }
        Node* node = new Node(key, value);
        hashMap[key] = node;
        insert(node);
        if (hashMap.size() > capacity) {
            Node* lru = left->next;
            remove(left->next);
            hashMap.erase(lru->key);
            delete lru;
        }
    }
private:
    int capacity;
    Node* left;
    Node* right;
    unordered_map<int, Node*> hashMap;

};
