#include <iostream>
#include <vector>
#include <string>

#include "../include/Trie.h"
#include "../../TrieNode/include/TrieNode.h"

namespace TrieTree {

    Trie::Trie() {
        root = new TrieNode();
    }

    void Trie::insert(std::string key) {
        TrieNode *node = root;
        for (char c: key) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    bool Trie::search(std::string key) {
        TrieNode *node = root;
        for (char c: key) {
            if (node->children.find(c) == node->children.end()) {
                return false;
            }
            node = node->children[c];
        }
        return node->isEndOfWord;
    }

    bool Trie::deleteKey(std::string key) {
        TrieNode *node = root;
        std::vector<TrieNode *> nodes;
        for (char c: key) {
            if (node->children.find(c) == node->children.end()) {
                return false; // key not found
            }
            nodes.push_back(node);
            node = node->children[c];
        }
        if (!node->isEndOfWord) {
            return false; // key not found
        }
        node->isEndOfWord = false;
        if (node->children.empty()) {
            for (int i = nodes.size() - 1; i >= 0; i--) {
                if (node->isEndOfWord || !node->children.empty()) {
                    break;
                }
                char c = key[i];
                nodes[i]->children.erase(c);
                node = nodes[i];
            }
        }
        return true; // key deleted
    };
};