// Best Approach 

import java.util.*;

public class Solution {
    public static int[] nextGreaterElement(int[] arr, int n) {
    int[] ans = new int[n];
    Deque<Integer> stack = new ArrayDeque<>();
      // Traverse from backwards
    for (int i = n - 1; i >= 0; i--) {
      // If stack is not empty and current element >= stack's peek, then pop element
      while (!stack.isEmpty() && arr[i] >= stack.peek()) {
        stack.pop();
      }
      // If stack is empty then put NGE of current element as -1
      if (stack.isEmpty()) ans[i] = -1;
        // Else NGE of current element is stack's peek
      else ans[i] = stack.peek();
      // Push the current element on the stack
      stack.push(arr[i]);
    }
      // Return ans
    return ans; 
    }
}


// T.C => O(2 * n) = O(n) as inner loop can go upto n in worst case
// S.C => O(2 * n) = O(n) for the 'stack' and 'ans'
