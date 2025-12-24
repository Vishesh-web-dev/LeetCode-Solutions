class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end(), greater<int>());

        int boxesNeeded = 0, capacityItr = 0;

        while (capacityItr < capacity.size() && totalApples > 0) {
            totalApples -= capacity[capacityItr++];
            boxesNeeded++;
        }

        return boxesNeeded;
    }
};