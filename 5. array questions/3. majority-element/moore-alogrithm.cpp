#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//  Moore's Algorithm
//  complexity O(n)
int majorityElement(vector<int> &nums)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}
int main()
{

    return 0;
}
