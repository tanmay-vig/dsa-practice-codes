#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Complexity O(nlogn)
int majorityElement(vector<int>& nums) {
        int n = nums.size();

        // sort 
        sort(nums.begin() , nums.end());

        // frequency 
        int frequency = 1 , ans = nums[0];
        for (int i = 1 ; i<n;i++)
        {
            if (nums[i] == nums[i-1])
            {
                frequency++;
            }
            else{
                frequency =1;
                ans = nums[i];
            }

            if (frequency > n/2)
            {
                return ans;
            }
        }
        return ans;
    }
int main()
{

    return 0;
}
