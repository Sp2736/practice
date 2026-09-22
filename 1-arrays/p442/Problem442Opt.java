import java.util.ArrayList;
import java.util.List;

/**
 * @file Problem442Opt.java
 * @brief LeetCode Problem 442: Find All Duplicates in an Array (In-Place Index Negation Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an integer array `nums` of length `n` where all integers are in the range `[1, n]`
 * and each integer appears once or twice, return an array of all integers that appear twice.
 * Must run in $O(n)$ time and use $O(1)$ auxiliary space.
 * 
 * Algorithm: In-Place Sign Inversion (Negation Mapping)
 * - Since `1 <= nums[i] <= n`, map each value `|x|` to array index `index = |x| - 1`.
 * - If `nums[index] < 0`, `|x|` has been seen before; add `|x|` to output list.
 * - Otherwise, negate `nums[index] = -nums[index]` to mark `|x|` as visited.
 * 
 * Time Complexity:  O(N) - Single pass through nums array.
 * Space Complexity: O(1) - Auxiliary space (excluding space required for returned output list).
 */

public class Problem442Opt {
    /**
     * Finds all duplicate numbers using O(1) auxiliary space index negation.
     * @param nums Input array where 1 <= nums[i] <= n.
     * @return List of duplicate numbers.
     */
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> duplicates = new ArrayList<>();
        for (int x : nums) {
            int index = Math.abs(x) - 1;
            if (nums[index] < 0) {
                duplicates.add(Math.abs(x));
            } else {
                nums[index] = -nums[index];
            }
        }
        return duplicates;
    }

    public static void main(String[] args) {
        Problem442Opt s = new Problem442Opt();
        int[] nums = {4, 3, 2, 7, 8, 2, 3, 1};
        System.out.println("Duplicates: " + s.findDuplicates(nums));
    }
}
