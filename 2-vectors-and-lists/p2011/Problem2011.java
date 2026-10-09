/**
 * @file Problem2011.java
 * @brief LeetCode Problem 2011: Final Value of Variable After Performing Operations (Middle Character Check Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal human solution).
 * 
 * @details
 * There is a programming language with only four operations and one variable `X`:
 * - `++X` and `X++` increments the value of the variable `X` by 1.
 * - `--X` and `X--` decrements the value of the variable `X` by 1.
 * 
 * Initially, the value of `X` is 0.
 * Given an array of strings `operations` containing a list of operations, return the final value of `X` after performing all the operations.
 * 
 * Algorithm: Middle Character Inspection
 * - Notice that in all four operations (`++X`, `X++`, `--X`, `X--`), the character at index 1 is always the operation symbol:
 *   - index 1 is `'+'` for increment operations.
 *   - index 1 is `'-'` for decrement operations.
 * - Iterate through each operation in `operations`.
 * - If `op.charAt(1) == '+'`, increment `X++`; otherwise decrement `X--`.
 * 
 * Time Complexity:  O(N) - Where N is the number of operations in the array.
 * Space Complexity: O(1) - Constant auxiliary space used.
 */

public class Problem2011 {
    /**
     * Calculates the final value of variable X after performing all operations.
     * @param operations Array of string operations ("++X", "X++", "--X", "X--").
     * @return Final integer value of X.
     */
    public int finalValueAfterOperations(String[] operations) {
        int X = 0;
        for (String op : operations) {
            if (op.charAt(1) == '+') {
                X++;
            } else {
                X--;
            }
        }
        return X;
    }

    public static void main(String[] args) {
        Problem2011 sol = new Problem2011();
        String[] ops1 = {"--X", "X++", "X++"};
        System.out.println("Final Value: " + sol.finalValueAfterOperations(ops1)); // 1

        String[] ops2 = {"++X", "++X", "X++"};
        System.out.println("Final Value: " + sol.finalValueAfterOperations(ops2)); // 3

        String[] ops3 = {"X++", "++X", "--X", "X--"};
        System.out.println("Final Value: " + sol.finalValueAfterOperations(ops3)); // 0
    }
}