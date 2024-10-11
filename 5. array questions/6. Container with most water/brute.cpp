#include <iostream>
#include <vector>
using namespace std;
// O(n^2) approach this will give TLE error
int maxArea(vector<int>& height) {
        int maxWater= 0;
        for (int i=0;i<height.size();i++)
        {
            for (int j=i+1;j<height.size();j++)
            {
                int w = j-i;
                int h = min(height[i], height[j]);
                int area = w*h;
                maxWater = max(maxWater ,  area);
            }
        }
        return maxWater;
    }

int main ()
{
    
    return 0;
}
