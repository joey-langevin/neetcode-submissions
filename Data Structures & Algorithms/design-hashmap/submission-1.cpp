class MyHashMap {
public:

    struct LinkedList {
        LinkedList* head;
        LinkedList* next;
        int value{-1};
        int key{-1};

        // time O(N / 10000)
        // space O(N / 10000)
    }; 

    MyHashMap() {
        
        for (int i = 0; i < 10000; ++i) {
            LinkedList* head = new LinkedList();
            hashMap.push_back(head);

        }
    }
    int getIndex(int key) {
        return key % 10000;
    }
    
    void put(int key, int value) {
        int index = getIndex(key);

        LinkedList* curr = hashMap[index];

        while (curr->next) {
            
            if (curr->next->key == key) {
                curr->next->value = value;
                return;
            }
            curr = curr->next;
        }
        LinkedList* node = new LinkedList();
        node->key = key;
        node->value = value;
        curr->next = node;

    }
    
    int get(int key) {
        int index = getIndex(key);

        LinkedList* curr = hashMap[index];

        while (curr) {
            if (curr->key == key) {
                return curr->value;
            }
            curr = curr->next;
        }
        return -1;
    }
    
    void remove(int key) {

        int index = getIndex(key);
        LinkedList* curr = hashMap[index];

        while (curr->next) {
            if (curr->next->key == key) {
                curr->next = curr->next->next;
                return;
            }
            curr = curr->next;
        }
    }
private: 
    std::vector<LinkedList*> hashMap;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */