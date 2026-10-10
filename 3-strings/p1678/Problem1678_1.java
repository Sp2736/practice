/**
 * @file Problem1678_1.java
 * @brief LeetCode Problem 1678: Goal Parser Interpretation (String Replacement Approach)
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
 * Algorithm: String Replacement
 * - Use the built-in `replace()` method to replace all occurrences of "()" with "o".
 * - Then replace all occurrences of "(al)" with "al".
 * 
 * Time Complexity:  O(N) - Linear scans across the string to locate and replace patterns.
 * Space Complexity: O(N) - Allocates intermediate strings during replacement operations.
 */

public class Problem1678_1 {
    /**
     * Interprets the command string using sequential string replacements.
     * @param command Input command string consisting of "G", "()", and "(al)".
     * @return Interpreted string.
     */
    public String interpret(String command) {
        return command.replace("()", "o").replace("(al)", "al");
    }

    public static void main(String[] args) {
        Problem1678_1 sol = new Problem1678_1();

        String cmd1 = "G()(al)";
        System.out.println("Test 1 (\"" + cmd1 + "\"): " + sol.interpret(cmd1)); // Expected: "Goal"

        String cmd2 = "G()()()()(al)";
        System.out.println("Test 2 (\"" + cmd2 + "\"): " + sol.interpret(cmd2)); // Expected: "Gooooal"

        String cmd3 = "(al)G(al)()()G";
        System.out.println("Test 3 (\"" + cmd3 + "\"): " + sol.interpret(cmd3)); // Expected: "alGalooG"
    }
}
