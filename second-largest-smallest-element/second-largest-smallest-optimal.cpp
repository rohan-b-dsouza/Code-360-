// Optimal - Solution (Brute and Better in GFG REPO) =>

int secondLargest(int n, vector <int> &arr) {
    int max = arr[0];
    int smax = -1;
    for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                smax = max;
                max = arr[i];
            }
            else if (arr[i] > smax && arr[i] != max) {
                smax = arr[i];
            }
        }
    return smax;
}

int secondSmallest(int n, vector <int> &arr) {
    int min = arr[0];
    int smin = INT_MAX;
    for (int i = 1; i < n; i++) {
            if (arr[i] < min) {
                smin = min;
                min = arr[i];
            }
            else if (arr[i] < smin && arr[i] != min) {
                smin = arr[i];
            }
        }
    return smin;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest = secondLargest(n, a);
    int smallest = secondSmallest(n, a);
    return {largest, smallest};
}

// T.C => O(n) + O(n) = O(2n) = o(n)
// S.C => O(1)
