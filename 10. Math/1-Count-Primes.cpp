#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPrimes(int n) {

        vector <bool> isPrime(n+1 , true);
        int ans = 0;

        for (int i =2 ; i < n ; i++)
        {
            if (isPrime[i])
            {
                ans++;

                for (int j = i*2 ; j < n ;j = j+i)
                {
                    isPrime[j] = false;
                }
            }
        }
        return ans;
    }
};

int main ()
{
    
    return 0;
}
