#ifndef TRIETREE_TRIENODE_H
#define TRIETREE_TRIENODE_H

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
#endif //TRIETREE_TRIENODE_H
