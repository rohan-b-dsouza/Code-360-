// Optimal Solution - 2

import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {

    public static int[] missingAndRepeating(ArrayList<Integer> arr, int n) {
        int xor = 0;
        int zero = 0;
        int one = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            xor ^= i + 1;
            xor ^= arr.get(i);
        }
        int bit_set_position = xor & ~(xor - 1);
        for (int i = 0; i < n; i++) {
            if((arr.get(i) & bit_set_position) != 0) {
                one ^= arr.get(i);
            }
            else {
                zero ^= arr.get(i);
            }
            if (((i + 1) & bit_set_position) != 0) {
                one ^= i + 1;
            }
            else {
                zero ^= i + 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr.get(i) == zero) cnt++;
        }
        if (cnt == 0) return new int[] {zero, one};
        return new int[] {one, zero};

    }
}
