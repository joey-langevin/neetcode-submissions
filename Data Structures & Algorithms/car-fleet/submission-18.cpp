


class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector<pair<float, int>> combined;
        for (int i = 0; i < speed.size(); ++i) {
            combined.push_back({position[i], speed[i]});
        }
        sort(combined.begin(), combined.end());

        vector<float> times;
        for (const auto& [pos, speed] : combined) {
            float time = float(target - pos)/ speed;
            times.push_back(time);
        }
        if (speed.size() > 2) {
            cout << times[2] << endl;
        }

        int numFleets = 1;
        int numCars = times.size();
        float leadTime = times[numCars - 1];

        for (int i = numCars - 2; i >= 0; --i) {
            if (times[i] > leadTime) {
                ++numFleets;
                leadTime = times[i];
            }
        }
        return numFleets;
       
    }
};