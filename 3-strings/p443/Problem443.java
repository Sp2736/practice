/**
 * @file Problem443.java
 * @brief LeetCode Problem 443: String Compression (Two-Pointer In-Place with String Conversion)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an array of characters `chars`, compress it using the following algorithm:
 * Begin with an empty string `s`. For each group of consecutive repeating characters in `chars`:
 * - If the group's length is 1, append the character to `s`.
 * - Otherwise, append the character followed by the group's length.
 * 
 * The compressed string `s` should not be returned directly, but instead be stored in the input
 * character array `chars`. Note that group lengths that are 10 or longer will be split into multiple characters.
 * After you are done modifying the input array, return the new length of the array.
 * You must write an algorithm that uses only constant extra space.
 * 
 * Algorithm: Two-Pointer In-Place Traversal with String.valueOf()
 * - Read consecutive matching characters using index `i` and keep count.
 * - Write the character at write-index `j++`.
 * - If count >= 10, convert count to a string / char array and write each digit at `j++`.
 * - Else if count > 1, write the single digit `(char) (count + '0')` at `j++`.
 * - Return the final write index `j`.
 * 
 * Time Complexity:  O(N) - Single pass over the characters array of length N.
 * Space Complexity: O(1) auxiliary space (O(log10(count)) temporary string allocation for digits).
 */

public class Problem443 {
    /**
     * Compresses consecutive repeating characters in-place using two pointers and string conversion.
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
            chars[j++] = c; // alphabet is done
            if (count >= 10) {
                for (char digit : String.valueOf(count).toCharArray()) {
                    chars[j++] = digit;
                }
            } else if (count > 1) {
                chars[j++] = (char) (count + '0'); // if only 1, then only alphabet, thats why only >1 used
            }
        }
        return j;
    }

    public static void main(String[] args) {
        Problem443 sol = new Problem443();

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
