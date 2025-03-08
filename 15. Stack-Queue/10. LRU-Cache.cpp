
#include <iostream>
#include <unordered_map>
using namespace std;


class LRUCache {
    public:
        class Node {
        public:
            int key, value;
            Node *prev, *next;
    
            Node(int k, int v) {
                key = k, value = v;
                prev = next = NULL;
            }
        };
    
        Node *head = new Node(-1, -1), *tail = new Node(-1, -1);
    
        unordered_map<int, Node*> m;
        int limit;
    
        void addNode(Node* newNode) {
            Node* oldNext = head->next;
            head->next = newNode;
            oldNext->prev = newNode;
            newNode->next = oldNext;
            newNode->prev = head;
        }
    
        void delNode(Node* oldNode) {
            Node* oldPrev = oldNode->prev;
            Node* oldNext = oldNode->next;
            oldPrev->next = oldNext;
            oldNext->prev = oldPrev;
        }
    
        LRUCache(int capacity) {
            limit = capacity;
            head->next = tail;
            tail->prev = head;
        }
    
        int get(int key) {
            if (m.find(key) == m.end()) return -1;
    
            Node *ansNode = m[key];
            int ans = ansNode->value;
    
            m.erase(key);
            delNode(ansNode);
            addNode(ansNode);
            m[key] = ansNode;
            return ans;
        }
    
        void put(int key, int value) {
            if (m.find(key) != m.end()) {
                Node* oldNode = m[key];
                delNode(oldNode);
                m.erase(key);
            }
            if (m.size() == limit) {
                // LRU to be deleted
                m.erase(tail->prev->key);
                delNode(tail->prev);
            }
            Node* newNode = new Node(key, value);
            addNode(newNode);
            m[key] = newNode;
        }
    };


    
    /**
     * Your LRUCache object will be instantiated and called as such:
     * LRUCache* obj = new LRUCache(capacity);
     * int param_1 = obj->get(key);
     * obj->put(key,value);
     */
    int main ()
{
    
    return 0;
}