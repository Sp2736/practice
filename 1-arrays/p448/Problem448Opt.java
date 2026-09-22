import java.util.ArrayList;
import java.util.List;

/**
 * @file Problem448Opt.java
 * @brief LeetCode Problem 448: Find All Numbers Disappeared in an Array (In-Place Index Negation Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an array `nums` of `n` integers where `nums[i]` is in the range `[1, n]`, return an array of all integers in the range `[1, n]` that do not appear in `nums`.
 * Must run in $O(n)$ time and use $O(1)$ auxiliary space.
 * 
 * Algorithm: In-Place Sign Inversion (Index Marking)
 * - Pass 1: For each element `x`, calculate `index = |x| - 1`. If `nums[index] > 0`, negate `nums[index] = -nums[index]` to mark `|x|` as present.
 * - Pass 2: Iterate through indices `0` to `n - 1`. Any index `i` with `nums[i] > 0` indicates that `i + 1` was never encountered in `nums`.
 * 
 * Time Complexity:  O(N) - Two sequential linear passes.
 * Space Complexity: O(1) - Auxiliary space (excluding space required for returned output list).
 */

public class Problem448Opt {
    /**
     * Finds disappeared numbers using O(1) auxiliary space in-place index negation.
     * @param nums Array of integers in range [1, n].
     * @return List of missing numbers.
     */
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> missing = new ArrayList<>();
        for (int x : nums) {
            int index = Math.abs(x) - 1;
            if (nums[index] > 0)
                nums[index] = -nums[index];
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > 0)
                missing.add(i + 1);
        }
        return missing;
    }

    public static void main(String[] args) {
        Problem448Opt s = new Problem448Opt();
        int[] nums = {4, 3, 2, 7, 8, 2, 3, 1};
        System.out.println("Missing numbers: " + s.findDisappearedNumbers(nums));
    }
}