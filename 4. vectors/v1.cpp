#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector <int> vec= {1 , 2, 3 , 4 , 5 , 6 , 7};
    cout << vec[0] << endl;
    // Creating for each 
    cout << "Printing the elements using for each loop \n";
    for (int i : vec)
    {
        cout << i << endl;
    }

    // Size 
    cout << vec.size() << endl;
    // Adding element 
    vec.push_back(8);
    vec.push_back(9);
    // removing element
    vec.pop_back();
    // Front function and Back Function
    cout << "\nFirst element : "<<vec.front() << " Last element : " << vec.back();
    // at function
    cout << "\nValue at index 5 : " <<vec.at(5); 
    return 0;
}
