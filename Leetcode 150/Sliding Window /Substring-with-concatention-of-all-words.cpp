#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> findSubstring(string s, vector<string>& words) {
            // Length of each word in the words vector.
            int wordLen = words[0].size();
            // Number of words in the words vector.
            int wordCount = words.size();
            // Total length of the concatenated substring we are looking for.
            int substringLen = wordLen * wordCount;
            // Length of the input string s.
            int n = s.size();
            
            // If the input string is shorter than the required substring, return an empty vector.
            if (n < substringLen) return {};
            
            // Create a frequency map of the words in the words vector.
            unordered_map<string, int> wordFreq;
            for (const string& word : words) {
                wordFreq[word]++;
            }
            
            // Vector to store the starting indices of the found substrings.
            vector<int> result;
            
            // Iterate through all possible starting positions of the substring,
            // starting from 0 up to wordLen - 1.
            for (int i = 0; i < wordLen; i++) {
                // Initialize the left and right pointers of the sliding window.
                int left = i, right = i, count = 0;
                // Create a window frequency map to track the words in the current window.
                unordered_map<string, int> window;
                
                // Iterate through the string s, moving the right pointer in steps of wordLen.
                while (right + wordLen <= n) {
                    // Extract the current word from the string s.
                    string word = s.substr(right, wordLen);
                    // Move the right pointer to the next word.
                    right += wordLen;
    
                    // If the current word is in the wordFreq map, it's a valid word.
                    if (wordFreq.count(word)) {
                        // Increment the count of the word in the window.
                        window[word]++;
                        // Increment the total word count in the window.
                        count++;
    
                        // While the count of the current word in the window exceeds its frequency in wordFreq,
                        // shrink the window from the left.
                        while (window[word] > wordFreq[word]) {
                            // Extract the leftmost word from the window.
                            string leftWord = s.substr(left, wordLen);
                            // Decrement the count of the leftmost word in the window.
                            window[leftWord]--;
                            // Decrement the total word count in the window.
                            count--;
                            // Move the left pointer to the next word.
                            left += wordLen;
                        }
    
                        // If the total word count in the window matches the number of words in the words vector,
                        // it means we found a valid substring.
                        if (count == wordCount) result.push_back(left);
                    } else {
                        // If the current word is not in wordFreq, reset the window.
                        window.clear();
                        count = 0;
                        left = right;
                    }
                }
            }
            
            // Return the vector of starting indices of the found substrings.
            return result;
        }
    };

int main ()
{
    
    return 0;
}
