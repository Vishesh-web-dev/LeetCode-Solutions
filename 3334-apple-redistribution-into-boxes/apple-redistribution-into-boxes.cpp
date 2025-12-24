class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = accumulate(apple.begin(), apple.end(), 0);
        // sort(capacity.begin(), capacity.end()); //1st way

        // counting sort  O(n) ==> use when sorting is required but n and //2nd way
        // nums[n] is small
        vector<int> cntArr(51, 0);
        for (int capacity : capacity) {
            cntArr[capacity]++;
        }
        int index = 0;
        for (int i = 0; i < cntArr.size(); i++) {
            while (cntArr[i] != 0) {
                capacity[index++] = i;
                cntArr[i]--;
            }
        }

        // sorting logic is written above

        int boxesNeeded = 0, capacityItr = capacity.size() - 1;

        while (capacityItr >= 0 && totalApples > 0) {
            totalApples -= capacity[capacityItr--];
            boxesNeeded++;
        }

        return boxesNeeded;
    }
};