#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currNum = nums[0];
        vector <int> ans;
        ans.push_back(currNum);
        for (int i=1; i< nums.size() ; i++)
        {
            if (nums[i] != currNum)
            {
                currNum = nums[i];
                ans.push_back(currNum);
            }
        }
        for (int i=0;i<ans.size();i++)
        {
            nums[i] = ans[i];
        }
        return ans.size();
    }
};
int main ()
{
    
    return 0;
}
