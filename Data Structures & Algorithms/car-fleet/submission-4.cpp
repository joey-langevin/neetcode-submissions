class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;

        for (int carIndex = 0; carIndex < position.size(); ++carIndex)
        {
            cars.emplace_back(position.at(carIndex), speed.at(carIndex));
        }
        sort(cars.begin(), cars.end());

        int numCarFleets = 0;
        float frontCar = 0.0f;
        for (int index = cars.size() - 1; index >= 0; --index)
        {
            float currentCar = static_cast<float>((target - cars[index].first)) / cars[index].second;
            if (currentCar > frontCar)
            {
                ++numCarFleets;
                frontCar = currentCar;
            }
        }
        return numCarFleets;

    }
};
