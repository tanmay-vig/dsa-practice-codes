#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        vector<int> candies(n, 1);

        // Left pass: Ensure right neighbor gets more candy if it has a higher rating
        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
            {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // Right pass: Ensure left neighbor gets more candy if it has a higher rating
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
            {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        // Compute total candies required
        return accumulate(candies.begin(), candies.end(), 0);
    }
};

int main()
{

    return 0;
}