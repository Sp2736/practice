import java.util.ArrayList;
import java.util.List;

/**
 * @file Problem448.java
 * @brief LeetCode Problem 448: Find All Numbers Disappeared in an Array (List Pre-population & Removal Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an array `nums` of `n` integers where `nums[i]` is in the range `[1, n]`, return an array of all the integers in the range `[1, n]` that do not appear in `nums`.
 * 
 * Algorithm: List Pre-population & Linear Search Removal
 * - Pre-populate a list `missing` with all values from `n` down to `1`.
 * - Iterate through `nums`; if `missing.contains(x)`, remove `x` from the list.
 * 
 * Time Complexity:  O(N^2) - Contains and remove operations on ArrayList take linear O(N) time per element.
 * Space Complexity: O(N) - Storage for the candidate numbers list.
 */

public class Problem448 {
    /**
     * Finds disappeared numbers by populating candidate list and removing seen values.
     * @param nums Array of integers in range [1, n].
     * @return List of missing numbers.
     */
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> missing = new ArrayList<>();
        int n = nums.length;
        {
            int x = n;
            while (x != 0) {
                missing.add(x);
                x--;
            }
        }
        for(int x : nums) {
            if(missing.contains(x)) {
                missing.remove(Integer.valueOf(x));
            }
        }
        return missing;
    }

    public static void main(String[] args) {
        Problem448 s = new Problem448();
        int[] nums = {4, 3, 2, 7, 8, 2, 3, 1};
        System.out.println("Missing numbers: " + s.findDisappearedNumbers(nums));
    }
}
