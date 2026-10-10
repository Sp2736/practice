/**
 * @file Problem443Opt.java
 * @brief LeetCode Problem 443: String Compression (Pure Arithmetic In-Place Digit Reversal)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Optimized solution developed after studying and taking hints from AI.
 * 
 * @details
 * Given an array of characters `chars`, compress it in-place using only constant extra memory.
 * 
 * Algorithm: Pure Arithmetic Extraction & In-Place Reversal
 * - Read consecutive matching characters using index `i` and calculate length `count`.
 * - Write the character at write pointer `chars[j++] = c`.
 * - If `count > 1`:
 *   - Record `start = j`.
 *   - Extract digits via modulo arithmetic `count % 10 + '0'` and append to `chars[j++]`,
 *     dividing `count /= 10`.
 *   - Because digits were appended least-significant first, reverse the digit range `[start, j - 1]`
 *     in-place using two pointers.
 * - Entire process eliminates heap allocations, `String.valueOf()`, and temporary char arrays.
 * 
 * Time Complexity:  O(N) - Linear scan of input array; reversing digit subarrays takes O(log10(count)) = O(1) operations.
 * Space Complexity: O(1) - Purely in-place modifications with zero heap/object allocations.
 */

public class Problem443Opt {
    /**
     * Compresses the character array strictly in-place using arithmetic digit extraction and reversal.
     * @param chars The character array to compress in-place.
     * @return The new length of the compressed array.
     */
    public int compress(char[] chars) {
        int n = chars.length;
        int j = 0;
        for (int i = 0; i < n;) {
            char c = chars[i];
            int count = 0;
            while (i < n && chars[i] == c) {
                count++;
                i++;
            }
            chars[j++] = c; // alphabet
            if (count > 1) {
                int start = j;
                while (count > 0) {
                    chars[j++] = (char) (count % 10 + '0');
                    count /= 10;
                }
                // digits are written in reverse order, so reverse them
                int end = j - 1;
                while (start < end) {
                    char temp = chars[start];
                    chars[start++] = chars[end];
                    chars[end--] = temp;
                }
            }
            // if only 1
        }
        return j;
    }

    public static void main(String[] args) {
        Problem443Opt sol = new Problem443Opt();

        char[] chars1 = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
        int len1 = sol.compress(chars1);
        System.out.println("Test 1 length: " + len1 + ", chars: " + new String(chars1, 0, len1)); // Expected: 6, "a2b2c3"

        char[] chars2 = {'a'};
        int len2 = sol.compress(chars2);
        System.out.println("Test 2 length: " + len2 + ", chars: " + new String(chars2, 0, len2)); // Expected: 1, "a"

        char[] chars3 = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
        int len3 = sol.compress(chars3);
        System.out.println("Test 3 length: " + len3 + ", chars: " + new String(chars3, 0, len3)); // Expected: 4, "ab12"
    }
}
