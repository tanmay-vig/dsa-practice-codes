
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#include <iostream>
using namespace std;

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next1 = NULL;
        while (curr != NULL)
        {
            next1 = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next1;
        }
        return prev;
    }
};

int main()
{

    return 0;
}