/**
 * @file Problem1678_2.java
 * @brief LeetCode Problem 1678: Goal Parser Interpretation (Single-Pass Pointer & StringBuilder Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * You own a Goal Parser that can interpret a string `command`. The `command` consists of an
 * alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret:
 * - "G" as the string "G",
 * - "()" as the string "o", and
 * - "(al)" as the string "al".
 * 
 * The interpreted strings are then concatenated in the original order.
 * 
 * Algorithm: Single-Pass Parsing with StringBuilder
 * - Iterate through the string character by character using index pointer `i`.
 * - If character is 'G', append 'G' to result.
 * - If character is '(':
 *   - Check the next character `command.charAt(i + 1)`.
 *   - If it is ')', append 'o' and advance pointer by 1 (`i++`).
 *   - Else, it must be "(al)", append "al" and advance pointer by 3 (`i += 3`).
 * 
 * Time Complexity:  O(N) - Strict single linear pass of length N without redundant traversals.
 * Space Complexity: O(N) - Auxiliary space required for the StringBuilder storing the output.
 */

public class Problem1678_2 {
    /**
     * Interprets the command string using single-pass pointer traversal and StringBuilder.
     * @param command Input command string consisting of "G", "()", and "(al)".
     * @return Interpreted string.
     */
    public String interpret(String command) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < command.length(); i++) {
            char c = command.charAt(i);
            if (c == 'G') {
                result.append('G');
            } else if (c == '(') {
                if (command.charAt(i + 1) == ')') {
                    result.append('o');
                    i++;
                } else {
                    result.append("al");
                    i += 3;
                }
            }
        }
        return result.toString();
    }

    public static void main(String[] args) {
        Problem1678_2 sol = new Problem1678_2();

        String cmd1 = "G()(al)";
        System.out.println("Test 1 (\"" + cmd1 + "\"): " + sol.interpret(cmd1)); // Expected: "Goal"

        String cmd2 = "G()()()()(al)";
        System.out.println("Test 2 (\"" + cmd2 + "\"): " + sol.interpret(cmd2)); // Expected: "Gooooal"

        String cmd3 = "(al)G(al)()()G";
        System.out.println("Test 3 (\"" + cmd3 + "\"): " + sol.interpret(cmd3)); // Expected: "alGalooG"
    }
}
