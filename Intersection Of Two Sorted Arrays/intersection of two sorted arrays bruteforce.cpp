// Brute - Force Approach =>

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector <int> visited(m);
    vector <int> intersec;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr2[j] > arr1[i]) break;
            if (arr1[i] == arr2[j] && visited[j] == 0) {
                intersec.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
        }
    }
    return intersec;
}

// T.C => O(n*m)
// S.C => O(m) for visited array and O(min(m,n)) for the intersec array ..which simplifies to Overall S.C = O(m) in the worst case
