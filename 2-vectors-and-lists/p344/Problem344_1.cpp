/**
 * @file Problem344_1.cpp
 * @brief LeetCode Problem 344: Reverse String (Two-Pointer In-Place Swap via Temp Variable)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Write a function that reverses a string. The input string is given as an array of characters `s`.
 * You must do this by modifying the input array in-place with O(1) extra memory.
 * 
 * Algorithm: Two-Pointer Converging Manual Swap
 * - Initialize two pointers: `left` at index 0 and `right` at index `s.size() - 1`.
 * - While `left < right`:
 *   - Swap characters using a temporary variable `temp`:
 *     `char temp = s[left]; s[left] = s[right]; s[right] = temp;`
 *   - Increment `left` and decrement `right`.
 * 
 * Time Complexity:  O(N) - Half-array traversal with N/2 swap operations.
 * Space Complexity: O(1) - Constant auxiliary space, fully in-place.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * @brief Reverses string vector in-place using two pointers and manual swap.
     * @param s Reference to vector of characters.
     */
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while(left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
};

int main() {
    Solution sol;

    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    cout << "Original: [\"h\", \"e\", \"l\", \"l\", \"o\"]" << endl;
    sol.reverseString(s1);
    cout << "Reversed: [";
    for (size_t i = 0; i < s1.size(); i++) {
        cout << "\"" << s1[i] << "\"" << (i + 1 < s1.size() ? ", " : "");
    }
    cout << "]" << endl;

    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    cout << "Original: [\"H\", \"a\", \"n\", \"n\", \"a\", \"h\"]" << endl;
    sol.reverseString(s2);
    cout << "Reversed: [";
    for (size_t i = 0; i < s2.size(); i++) {
        cout << "\"" << s2[i] << "\"" << (i + 1 < s2.size() ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}
