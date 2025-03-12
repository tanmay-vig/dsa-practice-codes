
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // Initialize the maximum length of the substring without repeating
        // characters.
        int maxLength = 0;
        // Initialize the left pointer of the sliding window.
        int left = 0;
        // Initialize an unordered map to store the frequency of characters in
        // the current window.
        unordered_map<char, int> count;

        // Iterate through the string using the right pointer of the sliding
        // window.
        for (int right = 0; right < s.length(); right++)
        {
            // Get the current character at the right pointer.
            char c = s[right];
            // Increment the count of the current character in the map.
            count[c] = count[c] + 1;

            // While the count of the current character is greater than 1, it
            // means we have a repeating character.
            while (count[c] > 1)
            {
                // Get the character at the left pointer.
                char leftChar = s[left];
                // Decrement the count of the character at the left pointer in
                // the map.
                count[leftChar] = count[leftChar] - 1;
                // Move the left pointer to the right to shrink the window.
                left++;
            }

            // Update the maximum length of the substring without repeating
            // characters, by comparing the current window size (right - left +
            // 1) with the current maximum length.
            maxLength = max(maxLength, right - left + 1);
        }

        // Return the maximum length of the substring without repeating
        // characters.
        return maxLength;
    }
};


int main ()
{
    
    return 0;
}