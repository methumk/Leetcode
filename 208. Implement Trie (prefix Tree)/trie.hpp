#include <bits/stdc++.h>

using namespace std;

class TrieNode{
public:
    unordered_map<char, TrieNode*> map;
    bool word_end = 0;
};


class Trie {
    TrieNode* head;
public:
    /** Initialize your data structure here. */
    Trie() {
        head = new TrieNode;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* look = head;
       for (int i = 0; i < word.length(); ++i){
           if (!look->map.count(word[i])){
               look->map[word[i]] = new TrieNode;
           }
           look = look->map[word[i]];
       }
        look->word_end = 1;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
       TrieNode* look = head;
        for (int i = 0; i < word.length(); ++i){
            if (!look->map.count(word[i])){
                return 0;
            }
            look = look->map[word[i]];
        }
        return look->word_end;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* look = head;
        for (int i = 0; i < prefix.length(); ++i){
            if (!look->map.count(prefix[i])){
                return 0;
            }
            look = look->map[prefix[i]];
        }
        return 1;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */