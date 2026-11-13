/**
 * @file Problem155_1.cpp
 * @brief LeetCode Problem 155: Min Stack (Two Parallel Vectors Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
 * 
 * Implement the MinStack class:
 * - `MinStack()` initializes the stack object.
 * - `void push(int val)` pushes the element `val` onto the stack.
 * - `void pop()` removes the element on the top of the stack.
 * - `int top()` gets the top element of the stack.
 * - `int getMin()` retrieves the minimum element in the stack.
 * 
 * You must implement a solution with O(1) time complexity for each function.
 * 
 * Algorithm: Two Parallel Vectors
 * - Maintain two `std::vector<int>` buffers:
 *   - `st`: stores the raw pushed values in LIFO order.
 *   - `minStack`: stores the prefix minimum value at each depth of the stack.
 * - `push(val)`: Appends `val` to `st`. Appends `val` (if empty) or `min(val, minStack.back())` to `minStack`.
 * - `pop()`: Pops the last element from both `st` and `minStack`.
 * - `top()`: Returns `st.back()`.
 * - `getMin()`: Returns `minStack.back()`.
 * 
 * Time Complexity:  O(1) for push, pop, top, and getMin.
 * Space Complexity: O(N) - Two separate vector allocations holding N integers each.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MinStack {
    vector<int> st;
    vector<int> minStack;

public:
    /**
     * @brief Initializes the MinStack object.
     */
    MinStack() {}

    /**
     * @brief Pushes element value onto the stack.
     * @param value Integer value to push.
     */
    void push(int value) {
        st.push_back(value);
        if (minStack.empty()) {
            minStack.push_back(value);
        } else {
            minStack.push_back(min(value, minStack.back()));
        }
    }

    /**
     * @brief Removes the element on top of the stack.
     */
    void pop() {
        st.pop_back();
        minStack.pop_back();
    }

    /**
     * @brief Gets the top element of the stack.
     * @return int Value of the top element.
     */
    int top() { return st.back(); }

    /**
     * @brief Retrieves the minimum element in the stack.
     * @return int Current minimum value.
     */
    int getMin() { return minStack.back(); }
};

int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "getMin(): " << minStack.getMin() << " (Expected: -3)" << endl;
    minStack.pop();
    cout << "top(): " << minStack.top() << " (Expected: 0)" << endl;
    cout << "getMin(): " << minStack.getMin() << " (Expected: -2)" << endl;

    return 0;
}
