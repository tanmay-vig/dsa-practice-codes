#include <iostream>
using namespace std;

void changeArr(int arr[] , int n)
{
    for (int i=0 ; i < n ; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int nums[] = {5, 15, 22, 1, 24 , -4, -2,9 };

    int n = sizeof(nums)/ sizeof(int);
    changeArr(nums, n);
    //  Array is by default pass by reference 
    for(int i =0 ; i < n ; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}