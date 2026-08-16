/**
 * @file Problem1108.java
 * @brief LeetCode Problem 1108: Defanging an IP Address (String Replace Approach)
 * 
 * @note
 * - Documentation: Created using LLM / AI.
 * - Solution Origin: Human written logic (optimal implementation).
 * 
 * @details
 * Given a valid (IPv4) IP `address`, return a defanged version of that IP address.
 * A defanged IP address replaces every period `"."` with `"[.]"`.
 * 
 * Algorithm: Built-in String Replacement
 * - Uses `address.replace(".", "[.]")` to perform a single-pass string replacement.
 * 
 * Time Complexity:  O(N) - Where N is the length of the address string.
 * Space Complexity: O(N) - Required for allocating the new defanged string.
 */

public class Problem1108 {
    /**
     * Replaces every period '.' with '[.]' in the given IPv4 address string.
     * @param address Valid IPv4 address string.
     * @return Defanged IP address string.
     */
    public String defangIPaddr(String address) {
        address = address.replace(".", "[.]");
        return address;
    }

    public static void main(String[] args) {
        Problem1108 s = new Problem1108();
        String address = "1.1.1.1";
        System.out.println("Address: " + address + " -> Defanged: " + s.defangIPaddr(address));
    }
}