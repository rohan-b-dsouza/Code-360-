// Brute-Force

import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {

    public static int[] missingAndRepeating(ArrayList<Integer> arr, int n) {
        int [] ans = new int[2];
        for (int i = 1; i <= n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (i == arr.get(j)) cnt++;
            }
            if (cnt == 0) ans[0] = i;
            else if (cnt == 2) ans[1] = i;
            if (ans[0] != 0 && ans[1] != 0) break;
        }
        return ans;
    }
}

// T.C => O(n ^ 2)
// S.C => O(1)
