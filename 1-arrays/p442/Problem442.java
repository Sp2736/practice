import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

/**
 * @file Problem442.java
 * @brief LeetCode Problem 442: Find All Duplicates in an Array (HashSet Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer array `nums` of length `n` where all the integers of `nums` are in the range `[1, n]`
 * and each integer appears once or twice, return an array of all the integers that appears twice.
 * 
 * Algorithm: HashSet Cycle/Duplicate Detection
 * - Iterate through `nums` and use `visited.add(x)`.
 * - If `visited.add(x)` returns `false` (meaning element already existed in the set), append `x` to `duplicates`.
 * 
 * Time Complexity:  O(N) - Single pass with average O(1) hash set insertion/lookup.
 * Space Complexity: O(N) - Memory required for storing elements in the HashSet.
 */

public class Problem442 {
    /**
     * Finds all duplicate numbers in an array using HashSet.
     * @param nums Input array where 1 <= nums[i] <= n.
     * @return List of duplicate numbers.
     */
    public List<Integer> findDuplicates(int[] nums) {
        HashSet<Integer> visited = new HashSet<>();
        ArrayList<Integer> duplicates = new ArrayList<>();
        for(int x : nums) {
            if(visited.add(x))
                continue;
            else
                duplicates.add(x);
        }
        return duplicates;
    }

    public static void main(String[] args) {
        Problem442 s = new Problem442();
        int[] nums = {4, 3, 2, 7, 8, 2, 3, 1};
        System.out.println("Duplicates: " + s.findDuplicates(nums));
    }
}