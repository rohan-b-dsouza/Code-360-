// Better - Solution =>

long long maxSubarraySum(vector<int> arr, int n)
{
        int maxSumSubarray = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            int sum = 0;
            for (int j = i; j < arr.size(); j++) {
                sum += arr[j];
                maxSumSubarray = max(maxSumSubarray, sum);
            }
        }
        if (maxSumSubarray < 0) {
            maxSumSubarray = 0;
        }
        return maxSumSubarray;
}

// T.C => O(n^2)
// S.C => O(1)
