import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;

/**
 * @file Problem1389.java
 * @brief LeetCode Problem 1389: Create Target Array in the Given Order (ArrayList Dynamic Insertion Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation using dynamic list insertion).
 * 
 * @details
 * Given two arrays of integers `nums` and `index`. Your task is to create a target array under the following rules:
 * - Initially target array is empty.
 * - From left to right read `nums[i]` and `index[i]`, insert at index `index[i]` the value `nums[i]` in target array.
 * - Repeat the previous step until there are no elements to read in `nums` and `index`.
 * Return the target array.
 * 
 * Algorithm: Dynamic ArrayList Insertion
 * - Utilize `List<Integer>` (via `ArrayList`) which natively supports insertion at a specified index `target.add(index[i], nums[i])`, automatically shifting elements to the right.
 * - Convert the list back to a primitive `int[]` array.
 * 
 * Time Complexity:  O(N^2) - Where N is the number of elements (dynamic array element shifting takes O(N) per insertion).
 * Space Complexity: O(N) - Auxiliary space required for storing elements in ArrayList.
 */

public class Problem1389 {
    /**
     * Creates target array by inserting nums[i] at index[i].
     * @param nums Array of values to insert.
     * @param index Array of indices where values should be inserted.
     * @return Target array after all insertions.
     */
    public int[] createTargetArray(int[] nums, int[] index) {
        int m = nums.length;
        List<Integer> target = new ArrayList<>();
        for(int i = 0; i < m; i++) {
            target.add(index[i], nums[i]);
        }
        int[] res = new int[target.size()];
        for(int i = 0; i < target.size(); i++) {
            res[i] = target.get(i);
        }
        return res;
    }

    public static void main(String[] args) {
        Problem1389 s = new Problem1389();
        int[] nums = {0, 1, 2, 3, 4};
        int[] index = {0, 1, 2, 2, 1};
        int[] result = s.createTargetArray(nums, index);
        System.out.println("Result Target Array: " + Arrays.toString(result));
    }
}