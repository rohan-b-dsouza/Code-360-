// Better Solution 2

import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {

    public static int[] missingAndRepeating(ArrayList<Integer> arr, int n) {
        int totalsum = n * (n + 1) / 2;
        int actualsum = 0;
        HashSet<Integer> set = new HashSet<>();
        int[] ans = new int[2];
        for (int i = 0; i < n; i++) {
            if (!set.contains(arr.get(i))) {
                actualsum += arr.get(i);
                set.add(arr.get(i));
            }
            else {
                ans[1] = arr.get(i);
            }
        }
        ans[0] = totalsum - actualsum;
        return ans;
    }
}
