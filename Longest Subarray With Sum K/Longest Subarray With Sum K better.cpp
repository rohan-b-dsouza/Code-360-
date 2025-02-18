// Better - Approach =>

// } Driver Code Ends
// Note :- This codechef qn constraints specify that elements can be positives and zeroes.
// This is a Better Solution when only positives and zeros occur, but Optimal Solution when positives,negatives,zeroes occur.

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int maxlen = 0;
        int sum = 0;
        int len = 0;
        unordered_map <int, int> prefixSum;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            int rem = sum - k;
            if (sum == k) {
                maxlen = max(maxlen, i + 1);
            }
            if (prefixSum.find(rem) != prefixSum.end()) {
                len = i - prefixSum[rem];
                maxlen = max(maxlen, len);
            }
            if (prefixSum.find(sum) == prefixSum.end()) {
                prefixSum[sum] = i;
            }
        }
        return maxlen;
    }
};

// T.C => O(n)
// S.C => O(n) for extra unordered map used
