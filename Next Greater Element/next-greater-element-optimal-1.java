// Optimal - 1

import java.util.*;

public class Solution {
    public static int[] nextGreaterElement(int[] arr, int n) {
    int[] ans = new int[n];
    Arrays.fill(ans, -1);
    Deque<Integer> stack = new ArrayDeque<>();
    for (int i = 0; i < n; i++) {
      while (!stack.isEmpty() && arr[i] > arr[stack.peek()]) {
        ans[stack.pop()] = arr[i];
      }
      stack.push(i);
    }
    return ans;
    }
}

// T.C => O(2 * n) = O(n)
// S.C => O(n) for stack and O(n) for 'ans' array
