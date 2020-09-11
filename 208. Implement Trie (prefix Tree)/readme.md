# Leetcode problem 208: Implement Trie (Prefix Tree)

## Efficiency:
![efficiency](/208.%20Implement%20Trie%20(prefix%20Tree)/eff.PNG)
* Insert Complexity: O(n) where n is the length of the key
* Search Complexity: O(n) where n is the length of the key
* startsWith Complexity: O(n) where n is the length of the key

## Problem Description:
Implement a trie with insert, search, and startsWith methods.

**Example**
```
Trie trie = new Trie();

trie.insert("apple");
trie.search("apple");   // returns true
trie.search("app");     // returns false
trie.startsWith("app"); // returns true
trie.insert("app");   
trie.search("app");     // returns true
```

**Note**
* You may assume that all inputs are consist of lowercase letters a-z.
* All inputs are guaranteed to be non-empty strings.
