// Better Solution 1 

import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {

    public static int[] missingAndRepeating(ArrayList<Integer> arr, int n) {
        int[] hash = new int[n + 1];
        int[] ans = new int[2];
        for (int i = 0; i < n; i++) {
            hash[arr.get(i)]++;
        }
        for (int i = 1; i <= n; i++) {
            if (hash[i] == 0) ans[0] = i;
            else if (hash[i] == 2) ans[1] = i;
            if (ans[0] != 0 && ans[1] != 0) break;
        }
        return ans;

    }
}
