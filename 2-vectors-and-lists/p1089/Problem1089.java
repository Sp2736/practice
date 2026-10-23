import java.util.Arrays;

/**
 * @file Problem1089.java
 * @brief LeetCode Problem 1089: Duplicate Zeros (Auxiliary Array Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given a fixed-length integer array `arr`, duplicate each occurrence of zero, shifting the
 * remaining elements to the right.
 * 
 * Note that elements beyond the length of the original array are not written. Do the above
 * modifications to the input array in place, do not return anything.
 * 
 * Algorithm: Auxiliary Array Simulation
 * - Allocate a temporary array `result` of the same length as `arr`.
 * - Iterate through `arr` with index `i` while maintaining index `j` for `result`:
 *   - Copy `arr[i]` to `result[j++]`.
 *   - If `arr[i] == 0` and `j < arr.length`, duplicate the zero by setting `result[j++] = 0`.
 * - Copy the contents of `result` back into `arr`.
 * 
 * Time Complexity:  O(N) - Linear pass through the array.
 * Space Complexity: O(N) - Auxiliary array of size N to store duplicated elements.
 */

public class Problem1089 {
    /**
     * Duplicates zeros in-place by simulating with an auxiliary array.
     * @param arr Array of integers to be modified.
     */
    public void duplicateZeros(int[] arr) {
        int[] result = new int[arr.length];
        int j = 0;
        for (int i = 0; i < arr.length && j < arr.length; i++) {
            result[j++] = arr[i];
            if (arr[i] == 0 && j < arr.length) {
                result[j++] = 0;
            }
        }
        for (int i = 0; i < arr.length; i++) {
            arr[i] = result[i];
        }
    }

    public static void main(String[] args) {
        Problem1089 sol = new Problem1089();

        int[] arr1 = {1, 0, 2, 3, 0, 4, 5, 0};
        sol.duplicateZeros(arr1);
        System.out.println("Result 1: " + Arrays.toString(arr1));

        int[] arr2 = {1, 2, 3};
        sol.duplicateZeros(arr2);
        System.out.println("Result 2: " + Arrays.toString(arr2));

        int[] arr3 = {0, 0, 0, 0, 0};
        sol.duplicateZeros(arr3);
        System.out.println("Result 3: " + Arrays.toString(arr3));
    }
}