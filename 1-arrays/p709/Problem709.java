/**
 * @file Problem709.java
 * @brief LeetCode Problem 709: To Lower Case (ASCII Character Offset Shift Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation).
 * 
 * @details
 * Given a string `s`, return the string after replacing every uppercase letter with the same lowercase letter.
 * 
 * Algorithm: ASCII Character Arithmetic Shift
 * - Convert string to a mutable character array `s.toCharArray()`.
 * - For each character, check if it falls within the uppercase ASCII range `'A' <= c <= 'Z'`.
 * - Shift the character to lowercase by adding 32 (since `'a' - 'A' == 32`).
 * - Return the reconstructed string `new String(chars)`.
 * 
 * Time Complexity:  O(N) - Where N is the length of string s.
 * Space Complexity: O(N) - Space required for the character array allocation.
 */

public class Problem709 {
    /**
     * Converts all uppercase ASCII characters in s to lowercase.
     * @param s Input string.
     * @return Transformed lowercase string.
     */
    public String toLowerCase(String s) {
        char[] chars = s.toCharArray();
        for (int i = 0; i < chars.length; i++) {
            if (chars[i] >= 'A' && chars[i] <= 'Z')
                chars[i] += 32;
        }
        return new String(chars);
    }

    public static void main(String[] args) {
        Problem709 s = new Problem709();
        String s1 = "Hello";
        System.out.println("Lowercase: " + s.toLowerCase(s1));
        
        String s2 = "here";
        System.out.println("Lowercase: " + s.toLowerCase(s2));
        
        String s3 = "LOVELY";
        System.out.println("Lowercase: " + s.toLowerCase(s3));
    }
}