#include <iostream>
#include <deque>
using namespace std;
int main ()
{
    
    return 0;
}



class MyStack {
    deque <int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push_back(x);
    }
    
    int pop() {
        if (empty()){
            return -1;
        }
        int ans = q.back();
        q.pop_back();
           return ans;
        
    }
    
    int top() {
        if (empty()){
            return -1;
        }
            return q.back();
        
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */