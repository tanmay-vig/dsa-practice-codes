#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map <int, int> m;
        vector <int> ans;

        for (int i=0 ;i < arr.size() ;i++)
        {
            int first = arr[i];
            int sec = target - first;

            if (m.find(sec) != m.end())
            {
                ans.push_back((i));
                ans.push_back(m[sec]);
                break;
            }

            m[first] = i;
        }
        return ans;
    }
};

int main ()
{
    
    return 0;
}
