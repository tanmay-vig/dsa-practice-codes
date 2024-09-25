#include <iostream>
using namespace std;

int main()
{
    int n = 4 , m = 8;
    cout << "n = " << n << " m = " << m << endl; 
    cout << "Bitwise & (and)" << (n & m) << endl
    << "Biwise | (or)" << (n | m) << endl 
    << "Biwise ^ (xor)" << (n ^m) << endl
    << "Bitwise << (left shift) for n=4 " << (n << 1) << endl
    << "Bitwise >>(right shift) for n=4 " << (n>>1) << endl;
    return 0;
}