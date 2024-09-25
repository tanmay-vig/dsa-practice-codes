#include <iostream>
using namespace std;

int main()
{
    int n = 4 , m = 8;
    cout << "Bitwise & " << (n & m) << endl
    << "Biwise | " << (n | m) << endl 
    << "Biwise ^ " << (n ^m) << endl
    << "Bitwise << for n=4 " << (n << 1) << endl
    << "Bitwise >> for n=4 " << (n>>1) << endl;
    return 0;
}