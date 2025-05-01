// Optimal Solution - 1

import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {

    public static int[] missingAndRepeating(ArrayList<Integer> arr, int n) {
        long N = n;
        long sum_n = (N * (N + 1)) / 2;
        long sum_n_sqr = (N * (N + 1) * (2*N + 1)) / 6;  
        long sum_arr = 0;
        long sum_arr_sqr = 0;
        for (int i = 0; i < N; i++) {
            sum_arr += arr.get(i);
            sum_arr_sqr += (long)arr.get(i) * (long)arr.get(i);
        }
        long val1 = sum_n - sum_arr;
        long val2 = sum_n_sqr - sum_arr_sqr;
        val2 = val2 / val1;
        long x = (val1 + val2) / 2;
        long y = x - val1;
       int [] ans = {(int) x, (int) y};          
        return ans;
        
    }
}

// T.C => O(n)
// S.C => O(1)
