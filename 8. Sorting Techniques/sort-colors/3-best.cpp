#include <iostream>
#include <vector>
using namespace std;

// This is done using DNF algorithm 
// DNF : - Dutch National Flag
// Done in O(n) time 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int mid = 0, high = n - 1, low = 0;
        while (mid <= high) {
            if (nums[mid] == 0) {

                swap(nums[mid], nums[low]);
                mid++, low++;
            } else if (nums[mid] == 1) {

                mid++;
            } else {

                swap(nums[high], nums[mid]);
                high--;
            }
        }
    };
};
int main ()
{
    
    return 0;
}
