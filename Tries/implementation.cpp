#include <iostream>
#include <string>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        // assumption, word will be in CAPS
        int index = word[0] - 'A';
        TrieNode *child;
        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // RECURSION
        insertUtil(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            return false;
        }
        return searchUtil(child, word.substr(1)); // Corrected recursion
    }
    bool search(string word)
    {
        return searchUtil(root, word);
    }

    bool deleteUtil(TrieNode *root, string word, int depth)
    {
        if (depth == word.length())
        {
            if (root->isTerminal)
            {
                root->isTerminal = false;
                return isEmpty(root);
            }
            return false;
        }

        int index = word[depth] - 'A';
        if (root->children[index] == NULL)
        {
            return false;
        }

        bool shouldDeleteChild = deleteUtil(root->children[index], word, depth + 1);

        if (shouldDeleteChild)
        {
            delete root->children[index];
            root->children[index] = NULL;
            return isEmpty(root) && !root->isTerminal;
        }
        return false;
    }

    void deleteWord(string word)
    {
        if (search(word))
        {
            deleteUtil(root, word, 0);
        }
    }

    bool isEmpty(TrieNode *node)
    {
        for (int i = 0; i < 26; i++)
        {
            if (node->children[i] != NULL)
                return false;
        }
        return true;
    }
};

int main()
{
    Trie *t = new Trie;
    t->insertWord("ABCD");
    t->insertWord("ABCE");
    cout << t->search("ABCD") << endl;
    t->deleteWord("ABCD");
    cout << t->search("ABCD") << endl;
    cout << t->search("ABCE") << endl;

    return 0;
}