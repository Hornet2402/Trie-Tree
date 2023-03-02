cmake_minimum_required(VERSION 3.24)
project(TrieTree)

set(CMAKE_CXX_STANDARD 17)

add_executable(TrieTree main.cpp
        Trie/src/Trie.cpp
        Trie/include/Trie.h
        TrieNode/src/TrieNode.cpp
        TrieNode/include/TrieNode.h)

