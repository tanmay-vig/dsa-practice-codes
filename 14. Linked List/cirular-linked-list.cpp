#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Circularlist
{
    Node *head, *tail;

public:
    Circularlist()
    {
        head = tail = NULL;
    }
    // Functions
    void insert_at_head(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insert_at_tail(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // pop front
    void deleteAtHead()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        { // single node
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    // pop back
    void deleteAtTail()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = tail;
            Node *prev = head;
            while (prev->next != tail)
            {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
        // print
        void print()
        {
            if (head == NULL)
                return;
            Node *temp = head->next;
            cout << head->data << "->";
            while (temp != head)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    };

    int main()
    {
        Circularlist cll;

        cll.insert_at_head(1);
        cll.insert_at_head(2);
        cll.insert_at_head(3);

        cll.print();
        cll.insert_at_tail(5);
        cll.print();
        cll.deleteAtHead();
        cll.print();
        cll.deleteAtTail();
        cll.print();
        return 0;
    }
