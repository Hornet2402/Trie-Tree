#ifndef TRIETREE_TRIE_H
#define TRIETREE_TRIE_H

#include <string>
#include <iostream>

#include "../../TrieNode/include/TrieNode.h"

namespace TrieTree {

    class Trie {
    public:
        TrieNode *root;

        Trie();

        void insert(std::string key);

        bool search(std::string key);

        bool deleteKey(std::string key);
    };

}; // TrieTree
#endif //TRIETREE_TRIE_H
