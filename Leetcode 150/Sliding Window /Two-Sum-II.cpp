
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0, j = numbers.size() - 1;
        while (i < j)
        {
            int sum = numbers[i] + numbers[j];
            if (sum == target)
                break;
            if (sum > target)
                j--;
            else
                i++;
        }
        vector<int> ans;
        ans.push_back(i + 1);
        ans.push_back(j + 1);
        return ans;
    }
};

int main()
{

    return 0;
}