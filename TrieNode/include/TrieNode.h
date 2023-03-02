#ifndef TRIENODE_H
#define TRIENODE_H

#include <unordered_map>
#include <iostream>

namespace TrieTree {

    class TrieNode {
    public:
        std::unordered_map<char, TrieNode *> children;
        bool isEndOfWord;

        TrieNode();
    };

} // TrieTree
#endif TRIENODE_H
