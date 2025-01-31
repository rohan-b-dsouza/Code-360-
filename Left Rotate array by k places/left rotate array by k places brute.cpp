// Brute-Force Approach =>

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    vector <int> temp;
    for (int i = 0; i < k; i++) {
        temp.push_back(arr[i]);
    }
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }
    
    for (int j = 0; j < temp.size(); j++){
        arr[n - k + j] = temp[j];
    }
    return arr;
}

// T.C => O(k) + O(n - k) + o(k) = O(n + k)
// S.C => O(k) extra space used
