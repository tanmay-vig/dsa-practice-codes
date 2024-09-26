#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    cout << sizeof(marks)/sizeof(int) << endl;
    // Taking array elements as input
    cout << "Taking elements as input : \n";
    for (int i=0 ; i < sizeof(marks)/sizeof(int) ; i++ )
    {
        cin >> marks[i];
    }
    // Printing all the array elements
    cout << "Array elements : " << endl;
    for (int i = 0; i < sizeof(marks)/sizeof(int); i++)
    {
        cout << marks[i] << endl;
    }
    
    return 0;
}