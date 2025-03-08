#include <iostream>
using namespace std;

class CircularQueue{

    int* arr;
    int currSize ,  cap;
    int f  , r ;
    public:
    CircularQueue(int size)
    {
        cap = size;
        arr = new int[cap];
        currSize = 0 ;
        f = 0 , r = -1;
    }

    void push(int data)
    {
        if (currSize == cap)
        {
            cout << "CQ is full\n";
            return;
        }
        r = (r+1)%cap;
        arr[r] = data;
        currSize++;

    }

    void pop()
    {
        if (empty())
        {
            cout << "CQ is already empty\n";
            return;
        }
        f = (f+1) % cap;
        currSize--;
    }

    int front()
    {
        if (empty())
        {
            cout << "CQ is already empty\n";
            return -1;
        }
        return arr[f];
    }
    bool empty()
    {
        return currSize == 0;
    }
};

int main ()
{
    CircularQueue cq(5);
    cq.push(1);
    cq.push(2);
    cout << cq.front();
    cq.push(3);
    cq.pop();
    cout << cq.front();
    return 0;
}
