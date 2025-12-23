class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // have three pointers and start from back to overwrite 0 correctly
        int st1 = m - 1, st2 = n - 1, en = m + n - 1;

        while (st1 >= 0 && st2 >= 0) {
            if (nums1[st1] < nums2[st2]) {
                nums1[en--] = nums2[st2--];
            } else {
                nums1[en--] = nums1[st1--];
            }
        }

        while (st1 >= 0) {
            nums1[en--] = nums1[st1--];
        }
        while (st2 >= 0) {
            nums1[en--] = nums2[st2--];
        }
    }
};