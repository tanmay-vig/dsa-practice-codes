#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
};

class Solution
{
public:
    Node *flatten(Node *head)
    {
        if (head == NULL)
        {
            return head;
        }

        Node *curr = head;
        while (curr != NULL)
        {
            if (curr->child != NULL)
            {
                // flatten child nodes
                Node *next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                // find tail
                while (curr->next != NULL)
                {
                    curr = curr->next;
                }

                // attach tail with next ptr
                if (next != NULL)
                {
                    curr->next = next;
                    next->prev = curr;
                }
            }

            curr = curr->next;
        }
        return head;
    }
};
int main()
{

    return 0;
}
