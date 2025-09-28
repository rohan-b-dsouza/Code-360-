// Optimal - 1 (Monotonic Decreasing Stack)

import java.util.*;

public class Solution {
    public static int[] nextGreaterElement(int[] arr, int n) {
    int[] ans = new int[n];
    // First initialize all elements with NGE as -1
    Arrays.fill(ans, -1);
    Deque<Integer> stack = new ArrayDeque<>();
    for (int i = 0; i < n; i++) {
        // If stack is not empty and current element is greater than stack's peek, then NGE of the stack peek is current element
      while (!stack.isEmpty() && arr[i] > arr[stack.peek()]) {
        ans[stack.pop()] = arr[i];
      }
        // Add current element's index to the stack
      stack.push(i);
    }
        // Return the answer
    return ans;
    }
}

// T.C => O(n) + O(2 * n) = O(3 * n) = O(n)
// S.C => O(n) for stack and O(n) for 'ans' array
