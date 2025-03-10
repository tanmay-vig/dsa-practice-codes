#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        vector<string> fullJustify(vector<string>& words, int maxWidth) {
            vector <vector<string>> result;
            vector <string> line;
            int lineLength = 0;
    
            for (const string& word : words) {
                if (lineLength + line.size() + word.length() <= maxWidth) {
                    line.push_back(word);
                    lineLength += word.length();
                } else {
                    result.push_back(line);
                    line.clear();
                    line.push_back(word);
                    lineLength = word.length();
                }
            }
    
            result.push_back(line);
    
            vector<string> justifiedLines;
            for (int i = 0; i < result.size() - 1; i++) {
                line = result[i];
                int numWords = line.size();
                int numSpaces = maxWidth;
                for (const string& word : line) {
                    numSpaces -= word.length();
                }
    
                int spaceGaps = max(numWords - 1, 1);
                int spacesPerGap = numSpaces / spaceGaps;
                int extraSpaces = numSpaces % spaceGaps;
    
                string justifiedLine = "";
                for (const string& word : line) {
                    justifiedLine += word;
    
                    if (spaceGaps > 0) {
                        int spacesToAdd = spacesPerGap + (extraSpaces > 0 ? 1 : 0);
                        justifiedLine += string(spacesToAdd, ' ');
                        extraSpaces -= 1;
                        spaceGaps -= 1;
                    }
                }
    
                justifiedLines.push_back(justifiedLine);
            }
    
            string lastLine = "";
            for (const string& word : result[result.size() - 1]) {
                lastLine += word + " ";
            }
            lastLine.pop_back();
            lastLine += string(maxWidth - lastLine.length(), ' ');
            justifiedLines.push_back(lastLine);
    
            return justifiedLines;      
        }
    };

int main ()
{
    
    return 0;
}
