#include <iostream>
using namespace std;
void changeA(int *a)
{
    *a = 20;
    cout << "Value of a in function: " << *a << endl;
}

//  Can also be called using alias 
// void changeA(int &a)
// {
//     a = 20;
//     cout << "Value of a in function: " << *a << endl;
// }
int main ()
{
    int a = 10;
    cout << "Value of a : " << a << endl;
    changeA(&a);
    // alias function called 
    // changeA(a);
    cout << "Value of a in main after changeA(): " << a << endl; 
    return 0;
}
