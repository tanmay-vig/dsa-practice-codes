#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long y = x;
        long ans = 0;
        while (y > 0)
        {
            int m = y%10;
            ans = ans*10 + m;
            y=y/10;
        }

        if (ans == x) return true;
        else return false;
    }
};

int main ()
{
    
    return 0;
}
