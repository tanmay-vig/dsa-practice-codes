#include <iostream>
#include <vector>
using namespace std;
// Complexity O(n^2)
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    for (int i : nums)
    {
        int frequency = 0;
        for (int j : nums)
        {
            if (i == j)
            {
                frequency++;
            }
        }
        if (frequency > n / 2)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    return 0;
}
