#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int nums[] = {5, 15, 22, 1, 24 , -4, -2,9 };
    int smallest = INT_MAX;
    int maximum = INT_MIN;
    cout << "Printing the array: " << endl;
    for (int i = 0; i < sizeof(nums)/sizeof(int); i++)
    {
        cout << nums[i] << " ";
    }
    cout <<  endl;
    for (int i = 0; i < sizeof(nums)/sizeof(int); i++)
    {
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        // } 
        // Function way to write the same thing
        smallest = min(smallest , nums[i]);
    }
    cout << "smallest = "<< smallest << endl;

    for (int i = 0; i < sizeof(nums)/sizeof(int); i++)
    {
        // if (nums[i] > maximum)
        // {
        //     maximum = nums[i];
        // } 
        // Function way to write the same thing
        maximum = max(maximum , nums[i]);
    }
    cout << "smallest = "<< maximum << endl;
    return 0;
}