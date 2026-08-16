/**
 * @file problem-412.cpp
 * @brief LeetCode Problem 412: Fizz Buzz (Standard Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic.
 * 
 * @details
 * Given an integer `n`, return a string array answer (1-indexed) where:
 * - answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
 * - answer[i] == "Fizz" if i is divisible by 3.
 * - answer[i] == "Buzz" if i is divisible by 5.
 * - answer[i] == i (as a string) if none of the above conditions are true.
 * 
 * Algorithm: Modulo Condition Checks
 * - Loop from 1 to `n`.
 * - Perform standard checks using the modulo operator `%` for divisibility by 3 and 5.
 * - Push corresponding strings to the answer vector.
 * 
 * Time Complexity:  O(N) - Loop runs exactly N times.
 * Space Complexity: O(1) auxiliary - No extra memory besides the output array.
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * @brief Generates FizzBuzz sequence from 1 to n.
     * @param n Maximum limit.
     * @return vector<string> List of FizzBuzz results.
     */
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i = 1; i <= n; i++) {
            if(i % 3 == 0 && i % 5 == 0)
                answer.push_back("FizzBuzz");
            else if(i % 3 == 0)
                answer.push_back("Fizz");
            else if(i % 5 == 0)
                answer.push_back("Buzz");
            else
                answer.push_back(to_string(i));
        }
        return answer;
    }
};

int main() {
    Solution s;
    int n = 15;
    vector<string> result = s.fizzBuzz(n);
    
    cout << "FizzBuzz (" << n << "):" << endl;
    for (const string& str : result) {
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}