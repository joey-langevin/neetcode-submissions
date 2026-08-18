class TimeMap {
public:
    unordered_map<string, vector<pair<string, int>>> timeMap;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {

        timeMap[key].emplace_back(value, timestamp);
    }
    
    string get(string key, int timestamp) {
        vector<pair<string, int>>& entry = timeMap[key];
        int l = 0;
        int r = entry.size()  - 1;
        string result = "";
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (entry[m].second == timestamp)
                result = entry.at(m).first;
            if (entry[m].second <= timestamp){
                result = entry[m].first;
                l = m + 1;
            }
            else
                r = m -1;
        }
        return result;
    }
};
