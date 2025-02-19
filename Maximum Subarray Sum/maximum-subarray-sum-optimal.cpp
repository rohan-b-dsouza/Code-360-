// Optimal - Approach =>
// This qn specifies 'empty subarray' therefore solution has an if condition at last. Refer LeetCode - 53 for similar question but where negative largest sum can also be returned. Also, brute, better, optimal is provided there.

long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum = 0;
    long long largestSumSubarray = LONG_MIN;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        largestSumSubarray = max(largestSumSubarray, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    
    // If an array has only negatives, then we consider an empty subarray i.e if we dont find a subarray sum with greater than zero sum then in such case, we set largestSumSubarray which is negative, to zero.
  
    if (largestSumSubarray < 0) {
        largestSumSubarray = 0;
    }
    return largestSumSubarray;
}
