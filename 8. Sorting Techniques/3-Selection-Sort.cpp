#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int si = i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j] < arr[si])
            {
                si = j;
            }
        }
        swap(arr[i] , arr[si]);
    }
}
int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    // Time Complexity O(n^2)
    SelectionSort(arr , 5);
    for (int i=0; i< 5;i++)
    {
        cout << arr[i];
    }
    return 0;
}