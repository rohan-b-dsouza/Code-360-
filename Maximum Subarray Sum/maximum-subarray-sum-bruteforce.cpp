// Brute - Force Approach =>

long long maxSubarraySum(vector<int> arr, int n)
{
        long long maxSumSubarray = LONG_MIN;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i; j < arr.size(); j++) {
                long long sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += arr[k];
                }
                maxSumSubarray = max(maxSumSubarray, sum);
            }
        }
        // If an array has only negatives, then we consider an empty subarray i.e if we dont find a subarray sum with greater than zero sum then in such case, we set largestSumSubarray which is negative, to zero.
        if (maxSumSubarray < 0) {
            maxSumSubarray = 0;
        }
        return maxSumSubarray;
}

// T.C => O(n^3)
// S.C => O(1)

