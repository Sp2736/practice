/**
 * @file Problem155_2.cpp
 * @brief LeetCode Problem 155: Min Stack (Vector of Pairs Approach)
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
 * Algorithm: Single Vector Storing Pairs {value, current_min}
 * - Maintain a single `std::vector<std::pair<int, int>> stack`:
 *   - `first`: the pushed value itself.
 *   - `second`: the minimum value present in the stack up to this depth.
 * - `push(val)`: If empty, `minimum = val`; otherwise `minimum = min(stack.back().second, val)`.
 *   Append `{val, minimum}` to `stack`.
 * - `pop()`: Call `stack.pop_back()` once; synchronizes both value and historical minimum simultaneously.
 * - `top()`: Returns `stack.back().first`.
 * - `getMin()`: Returns `stack.back().second`.
 * 
 * Time Complexity:  O(1) for push, pop, top, and getMin.
 * Space Complexity: O(N) - Single contiguous vector storing pairs, eliminating dual vector synchronization overhead.
 */

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

class MinStack {
    vector<pair<int, int>> stack;
    // the idea is to store stack values along with the minimum number together as a pair

public:
    /**
     * @brief Initializes the MinStack object.
     */
    MinStack() {
        // stack.reserve(30000); // optional
    }

    /**
     * @brief Pushes element value onto the stack along with the updated prefix minimum.
     * @param value Integer value to push.
     */
    void push(int value) {
        int minimum = stack.empty() ? value : min(stack.back().second, value);
        stack.push_back({value, minimum});
    }

    /**
     * @brief Removes the element on top of the stack.
     */
    void pop() {
        stack.pop_back();
    }

    /**
     * @brief Gets the top element of the stack.
     * @return int Value of the top element.
     */
    int top() {
        return stack.back().first;
    }

    /**
     * @brief Retrieves the minimum element in the stack.
     * @return int Current minimum value.
     */
    int getMin() {
        return stack.back().second;
    }
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
