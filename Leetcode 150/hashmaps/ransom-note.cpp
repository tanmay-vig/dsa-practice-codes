#include <bits/stdc++.h>

using namespace std;
int main ()
{
    
    return 0;
}
class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            unordered_map<char, int> magaHash;
    
            for (char c : magazine) {
                magaHash[c]++;
            }
    
            for (char c : ransomNote) {
                if (magaHash[c] <= 0) {
                    return false;
                }
                magaHash[c]--;
            }
    
            return true;
        }
    };
    