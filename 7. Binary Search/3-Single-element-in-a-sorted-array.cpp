#include <iostream>
#include <vector>
using namespace std;

// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

class Solution
{
public:
    int singleNonDuplicate(vector<int> &A)
    {
        int n = A.size();
        if (n == 1)
            return A[0];

        int st = 0, end = n - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (mid == 0 && A[0] != A[1])
                return A[mid];
            if (mid == n - 1 && A[n - 1] != A[n - 2])
                return A[mid];
            if (A[mid] != A[mid - 1] && A[mid] != A[mid + 1])
                return A[mid];

            if (mid % 2 == 0) // even
            {
                if (A[mid] == A[mid - 1])
                { // left
                    end = mid - 1;
                }
                else
                { // right
                    st = mid + 1;
                }
            }
            else
            {                             // odd
                if (A[mid] == A[mid - 1]) // right
                {
                    st = mid + 1;
                }
                else
                { // left
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{

    return 0;
}
