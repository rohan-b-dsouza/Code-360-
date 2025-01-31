// Optimal - Approach =>

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + (n -k));
    reverse(arr.begin() + (n - k), arr.end());
    return arr;
}

// T.C => O(n) + O (n - k) + O(k) = O(2n)
// S.C => O(1) extra space
