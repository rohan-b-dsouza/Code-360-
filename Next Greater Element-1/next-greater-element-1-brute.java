// Brute

import java.util.*;

public class Solution {
    public static int[] nextGreaterElement(int[] arr, int n) {
      int[] ans = new int[n];
      for (int i = 0; i < n; i++) {
        // First set NGE of current element as -1
        ans[i] = -1;
        for (int j = i + 1; j < n; j++) {
          // Set the first element greater than current element as its NGE, and break
          if (arr[j] > arr[i]) {
            ans[i] = arr[j];
            break; 
          } 
        }
      }
      // Return the answer
      return ans;
    }
}

// T.C => O(n ^ 2)
// S.C => O(n)
