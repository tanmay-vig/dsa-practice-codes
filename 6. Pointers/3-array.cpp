#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {1 , 2, 3 , 4, 5};

    cout << *arr << endl;

    int a = 10;
    // arr = &a;
    // above not allowed as it is constant pointer 
    return 0;
}
