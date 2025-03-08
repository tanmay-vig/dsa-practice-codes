#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int celebrity(vector<vector<int>> arr)
{
    
    stack <int> s;
    int n = arr.size();
    for (int i = 0 ; i < n ;i++)
    {
        s.push(i);
    }
    int i , j;
    while (s.size() > 1 )
    {
        i = s.top(); s.pop();
        j = s.top(); s.pop();

        if (arr[i][j] == 0)
        {
            s.push(i);
        }
        else{
            s.push(j);
        }
    }

    // checking for celebrity 
    int celeb = s.top();
    for (int i = 0 ; i<n ;i++)
    {
        if ((i!=celeb) && (arr[i][celeb] == 0 || arr[celeb][i] == 1))
        {
            return -1;
        }
    }
    return celeb;
}

int main()
{
    return 0;
}
