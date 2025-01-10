#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    // Time Complexity O(n^2)
    bubbleSort(arr , 5);
    for (int i=0; i< 5;i++)
    {
        cout << arr[i];
    }
    return 0;
}