/**
 * @file Problem344_2.cpp
 * @brief LeetCode Problem 344: Reverse String (Two-Pointer In-Place Swap via std::swap)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Write a function that reverses a string. The input string is given as an array of characters `s`.
 * You must do this by modifying the input array in-place with O(1) extra memory.
 * 
 * Algorithm: Two-Pointer Converging Swap using std::swap
 * - Initialize two pointers: `l` at index 0 and `r` at index `n - 1`.
 * - While `l < r`:
 *   - Swap elements directly using `std::swap(s[l], s[r])`.
 *   - Increment `l++` and decrement `r--`.
 * 
 * Time Complexity:  O(N) - Performs n / 2 iterations, each executing a constant-time swap.
 * Space Complexity: O(1) - Modifies the vector in-place with zero extra memory allocation.
 */

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    /**
     * @brief Reverses string vector in-place using two pointers and std::swap.
     * @param s Reference to vector of characters.
     */
    void reverseString(vector<char>& s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;
        while(l < r){
            swap(s[l], s[r]);
            l++;
            r--;
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
