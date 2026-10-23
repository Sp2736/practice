import java.util.Arrays;

/**
 * @file Problem1089Opt.java
 * @brief LeetCode Problem 1089: Duplicate Zeros (Two-Pointer In-Place Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given a fixed-length integer array `arr`, duplicate each occurrence of zero, shifting the
 * remaining elements to the right.
 * 
 * Note that elements beyond the length of the original array are not written. Do the above
 * modifications to the input array in place, do not return anything.
 * 
 * Algorithm: Two-Pass Two-Pointer In-Place
 * - Pass 1 (Count zeros that fit):
 *   - Count the number of zeros that will fit into the final array of length `n`.
 *   - Track effective boundary `left` and `possibleZeros`.
 *   - Special edge case: If a zero at the boundary would cause a duplication that extends past `n - 1`,
 *     we place a single zero at the end (`arr[n - 1] = 0`), decrement `n` and `left`, and adjust counters.
 * - Pass 2 (Copy backwards):
 *   - Iterate backwards from `left` towards 0 using pointer `j = n - 1 - possibleZeros`:
 *     - If `arr[i] == 0`, write two zeros at the write position.
 *     - Otherwise, copy `arr[i]` directly.
 * 
 * Time Complexity:  O(N) - Two linear passes through the array.
 * Space Complexity: O(1) - In-place modification without auxiliary array allocation.
 */

public class Problem1089Opt {
    /**
     * Duplicates zeros strictly in-place with O(1) auxiliary space using a two-pass two-pointer approach.
     * @param arr Array of integers to be modified in-place.
     */
    public void duplicateZeros(int[] arr) {
        int possibleZeros = 0;
        int length = arr.length - 1;

        // Count zeros that will fit inside the bounds
        for (int left = 0; left <= length - possibleZeros; left++) {
            if (arr[left] == 0) {
                // Edge case: zero cannot be duplicated because it would overflow the array boundary
                if (left == length - possibleZeros) {
                    arr[length] = 0;
                    length -= 1;
                    break;
                }
                possibleZeros++;
            }
        }

        // Start copying backwards from the last element that fits
        int last = length - possibleZeros;
        for (int i = last; i >= 0; i--) {
            if (arr[i] == 0) {
                arr[i + possibleZeros] = 0;
                possibleZeros--;
                arr[i + possibleZeros] = 0;
            } else {
                arr[i + possibleZeros] = arr[i];
            }
        }
    }

    public static void main(String[] args) {
        Problem1089Opt sol = new Problem1089Opt();

        int[] arr1 = {1, 0, 2, 3, 0, 4, 5, 0};
        sol.duplicateZeros(arr1);
        System.out.println("Result 1: " + Arrays.toString(arr1));

        int[] arr2 = {1, 2, 3};
        sol.duplicateZeros(arr2);
        System.out.println("Result 2: " + Arrays.toString(arr2));

        int[] arr3 = {8, 4, 5, 0, 0, 0, 0, 7};
        sol.duplicateZeros(arr3);
        System.out.println("Result 3: " + Arrays.toString(arr3));

        int[] arr4 = {0, 0, 0, 0, 0};
        sol.duplicateZeros(arr4);
        System.out.println("Result 4: " + Arrays.toString(arr4));
    }
}
