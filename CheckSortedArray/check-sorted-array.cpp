// Optimal - Solution =>

int isSorted(int n, vector<int> a) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

// T.C => O(n)
// S.C => O(1)
