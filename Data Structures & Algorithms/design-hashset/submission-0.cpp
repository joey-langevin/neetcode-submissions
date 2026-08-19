class MyHashSet {
public:


    MyHashSet() {
        hashSet.resize(1000001);
    }

    vector<bool> hashSet;
    
    void add(int key) {
        hashSet[key] = true;
    }
    
    void remove(int key) {
        hashSet[key] = false;
    }
    
    bool contains(int key) {
        return hashSet[key];
    }


};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

 // Input: ["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
//           [[],         [1],    [2],     [1],         [3],    [2],     [2],       [2],      [2]]

//           null,        null,    null,   true        false     null     true,      null,      false
// set: 1,
