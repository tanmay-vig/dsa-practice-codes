#include <iostream>
#include <vector>
using namespace std;
// Complexity is O(n^2)
vector <int> pairSum(vector <int> nums , int target)
{
    vector <int> ans;
    int n = nums.size();
    for (int i=0 ; i <n ;i++)
    {
        for (int j=i+1 ; j<n;j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}
int main ()
{
    vector <int> arr = { 2 , 7 , 11,13};
    int target = 9;
    vector <int> nums = pairSum(arr , target);
    cout << nums[0] << " " << nums[1] << endl;
    return 0;
}
