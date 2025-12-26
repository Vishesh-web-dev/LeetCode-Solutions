class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        //solution
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long totalHappiness = 0;
        for (int i = 0; i < k; i++) {
            if ((happiness[i] - i) > 0) {
                totalHappiness += happiness[i] - i;
            }
        }
        return totalHappiness;

//         PQ wins when:

// Values change irregularly

// You don’t know order in advance

// Operations are interleaved (streaming data)

// Big-O ignores how expensive each step is.

// Sorting

// Happens once

// Very optimized (C++ sort = introsort)

// Mostly sequential memory access (cache-friendly)

// Priority Queue

// Each operation:

// Pointer jumps

// Heap rebalancing

// Multiple comparisons
    }
};