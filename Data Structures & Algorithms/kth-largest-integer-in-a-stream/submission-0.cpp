class KthLargest {
    vector<int> stream;
    int kLargest;

public:
    KthLargest(int k, vector<int>& nums) {
        kLargest = k;
        sort(nums.begin(), nums.end());
        stream = nums;
    }
    
    int add(int val) {
        
        stream.emplace_back(val);
        sort(stream.begin(), stream.end());
        return stream.at(stream.size() - kLargest);
    }
};
