class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // input: 2, 4, -4, -1
        // stk: 2, 4, 

        // -4
    
        stack<int> stk;

        int size = asteroids.size();

        for (int i = 0;i<size;++i) {

            if (asteroids[i] > 0) {
                stk.push(asteroids[i]);
            }
            else {
                // while 
                    // current asteroid has greater magnituge than positive top of stack
                    // stk is not empty
                int curr = asteroids[i];
                bool add = true;
                while (!stk.empty() && stk.top() > 0) {
                    if (abs(curr) > stk.top()) {
                        stk.pop();

                    }
                    else if (abs(curr) == stk.top()) {
                        add = false;
                        stk.pop();
                        break;
                    }
                    else {
                        add = false;
                        break;
                    }
                }
                if (add) {
                    stk.push(curr);
                } 
            }
        }
        vector<int> res;
        while (!stk.empty()) {
            res.push_back(stk.top()); stk.pop();
        }
        std::reverse(res.begin(), res.end());
        return res;
        
    }
};

// 1, -1
// 

