#include <iostream>
#include <vector>
using namespace std;

int partition(vector <int> &arr , int st , int end)
{
    int idx = st -1 , pivot = arr[end];

    for (int j = st ; j < end ; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j] , arr[idx]);
        }
    }

    idx++;
    swap(arr[end] , arr[idx]);
    return idx;
}

void quickSort(vector <int> &arr , int st , int end)
{
    if (st < end)
    {
        int pivotIdx = partition(arr , st , end);
        quickSort(arr , st , pivotIdx-1); // left half
        quickSort(arr , pivotIdx + 1, end); // right half
    }
}

int main ()
{
    vector <int> arr = { 12 , 31 , 58 , 8 , 32 , 17};
    quickSort(arr , 0 , arr.size() -1);
    for (int i:arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
