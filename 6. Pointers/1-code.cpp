#include <iostream>
using namespace std;
int main ()
{
    int a = 10;
    int *ptr = &a;

    // Address of a  
    cout << "Address of a" << endl;
    cout << ptr << endl << &a << endl;

    cout << "Address of Pointer : "<<&ptr << endl; 

    // Pointer to pointer 
    int **ptr2 = &ptr;
    cout << &ptr << endl << ptr2 << endl;

    // * => dereference operator 

    cout << "Using dereferencing operator * : "<<*ptr << endl;
    
    cout << "Using dereferencing operator * : "<<*ptr2 << endl;
    cout << "Using dereferencing operator * : "<<**ptr2 << endl;

    // NULL POINTER 
    int *nullPtr = NULL;
    cout << nullPtr ;
    return 0;
}
