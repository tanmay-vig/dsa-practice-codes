#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        int idx = 0;
        for (int i=0; i < n ;i++)
        {
            char ch = chars[i];
            int counter = 0;
          
            while (i < n && ch == chars[i])
            {
                counter++ , i++;
            }


            if (counter == 1) chars[idx++] = ch;
            else{
                chars[idx++] = ch;
                string str = to_string(counter);
                for (char dig : str)
                    chars[idx++] = dig;
            }
            i--;
        }

        chars.resize(idx);
        return idx;
    }
};

int main ()
{
    
    return 0;
}
