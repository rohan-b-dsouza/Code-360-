// Brute - Force Approach =>

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int maxlen = 0;
        int len = -1;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += arr[j];
                if (sum == k) {
                    len = j - i + 1;
                    maxlen = max(maxlen, len);
                }
            }
        }
        return maxlen;
    }
};

// T.C => O(n^2)
// S.C => O(1)
