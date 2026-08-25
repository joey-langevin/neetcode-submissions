class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(), people.end());

        int size = people.size();
        int left = 0;
        int right = size -1;
        int numBoats = 0;
        while (left <= right) {
            if (left == right) {
                ++numBoats;

                return numBoats;
            }
            else if (people[left] + people[right] <= limit) {
                ++numBoats;

                ++left;
                --right;
            }
            else {
                ++numBoats;
                --right;
            }
        }
        return numBoats;
    }
};


// 1, 2, 2, 3, 3

//    l
//     r
// count; 2



