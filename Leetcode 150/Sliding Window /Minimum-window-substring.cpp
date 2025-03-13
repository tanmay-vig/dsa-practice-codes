#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string minWindow(string s, string t)
    {
        // If the length of s is less than the length of t, there's no possible
        // window.
        if (s.length() < t.length())
        {
            return "";
        }

        // Create a hash map to store the frequency of characters in t.
        unordered_map<char, int> charCount;
        for (char ch : t)
        {
            charCount[ch]++;
        }

        // Initialize the count of characters from t that are still needed.
        int targetCharsRemaining = t.length();
        // Array to store the start and end indices of the minimum window.
        // Initialized to maximum possible length.
        int minWindow[2] = {0, INT_MAX};
        // Start index of the sliding window.
        int startIndex = 0;

        // Iterate through the string s using the end index of the sliding
        // window.
        for (int endIndex = 0; endIndex < s.length(); endIndex++)
        {
            char ch = s[endIndex];
            // If the current character is in t and its count is positive,
            // decrement targetCharsRemaining.
            if (charCount.find(ch) != charCount.end() && charCount[ch] > 0)
            {
                targetCharsRemaining--;
            }
            // Decrement the count of the current character in the hash map.
            charCount[ch]--;

            // If all characters from t are found in the current window.
            if (targetCharsRemaining == 0)
            {
                // Shrink the window from the start until a character from t is
                // encountered.
                while (true)
                {
                    char charAtStart = s[startIndex];
                    // If the character at the start is in t and its count is 0,
                    // we've found a character to remove.
                    if (charCount.find(charAtStart) != charCount.end() &&
                        charCount[charAtStart] == 0)
                    {
                        break;
                    }
                    // Increment the count of the character at the start and
                    // move the start index.
                    charCount[charAtStart]++;
                    startIndex++;
                }

                // Update the minimum window if the current window is smaller.
                if (endIndex - startIndex < minWindow[1] - minWindow[0])
                {
                    minWindow[0] = startIndex;
                    minWindow[1] = endIndex;
                }

                // Increment the count of the character at the start, as it's
                // being removed.
                charCount[s[startIndex]]++;
                // Increment targetCharsRemaining, as we need to find this
                // character again.
                targetCharsRemaining++;
                // Move the start index to the next character.
                startIndex++;
            }
        }

        // If minWindow[1] is still at its initial maximum value, no valid
        // window was found.
        return minWindow[1] >= s.length()
                   ? ""
                   : s.substr(minWindow[0], minWindow[1] - minWindow[0] + 1);
    }
};

int main()
{

    return 0;
}
