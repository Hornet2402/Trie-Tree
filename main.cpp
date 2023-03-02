#include <iostream>

#include "Trie/include/Trie.h"

using namespace std;
using namespace TrieTree;

int main() {
    Trie *trie = new Trie();
    trie->insert("cat");
    trie->insert("car");
    trie->insert("dog");
    trie->insert("doll");
    trie->insert("dork");

    cout << "Search for 'cat': " << trie->search("cat") << endl; // Output: 1 (true)
    cout << "Search for 'dog': " << trie->search("dog") << endl; // Output: 1 (true)
    cout << "Search for 'do': " << trie->search("do") << endl;   // Output: 0 (false)

    cout << "Deleting 'doll'..." << endl;
    trie->deleteKey("doll");
    cout << "Search for 'doll': " << trie->search("doll") << endl; // Output: 0 (false)

    return 0;
}
