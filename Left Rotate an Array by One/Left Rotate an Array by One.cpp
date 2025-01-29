// Optimal-Solution =>

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int firstelem = arr[0];
   for (int i = 1; i < n; i++) {
       arr[i - 1] = arr[i];
   }
   arr[n - 1] = firstelem;
   return arr;
}

// T.C => O(n)
// S.C => O(1)
