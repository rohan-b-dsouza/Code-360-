// Optimal - Solution => (Only for qn where only positives and zeroes occur)

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i = 0;
    int j = 0;
    long long sum = a[0];
    int maxlen = 0;
    while (j < a.size()) {
        while (sum > k && i <= j) {
            sum -= a[i];
            i++;
        }
        if (sum == k) {
            maxlen = max(maxlen, j - i + 1);
        }
        j++;
        if (j < a.size()) {
            sum += a[j];
        }
    }
    return maxlen;
}

// T.C => O(2n) = O(n)
// S.C => O(1)
