#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; //+4

    int *ptr2;
    int *ptr1 = ptr1+3;
    cout << ptr2;
    cout << ptr1 - ptr2;
    return 0;
}
