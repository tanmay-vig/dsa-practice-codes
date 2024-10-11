#include <iostream>
#include <vector>
using namespace std;
// O(n) Solution. It is 2 pointer approach

int maxArea(vector<int>& height) {
        int maxWater= 0, lp = 0 , rp = height.size()-1;
        while (lp < rp)
        {
            int w = rp - lp;
            int h = min(height[lp] , height[rp]);
            int currWater = w*h;
            maxWater = max(maxWater , currWater);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
    }
int main ()
{
    
    return 0;
}
