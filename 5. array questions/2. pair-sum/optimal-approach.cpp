#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum < target)
        {
            i++;
        }
        else if (pairSum > target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 7, 11, 13};
    int target = 9;
    vector<int> nums = pairSum(arr, target);
    cout << nums[0] << " " << nums[1] << endl;
    return 0;
}
