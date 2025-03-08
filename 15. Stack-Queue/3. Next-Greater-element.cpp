#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector <int> greaterElement(vector <int> v)
{
    stack <int> s;
    vector <int> ans;
    for (int i = v.size() -1 ; i>=0;i--)
    {

        while (s.size() > 0 && s.top() <= v[i])
        {
            s.pop();
        }
        if (s.empty()) {
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
    }
    return ans;

}

int main ()
{
    
    return 0;
}
