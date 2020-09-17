#include <bits/stdc++.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> arr;

    void store(TreeNode* start){
        if (start->right != NULL){
            store(start->right);     
        }else if (start->left == NULL){
           arr.push_back(start->val);
            return;
        }
        
        arr.push_back(start->val);
        
        if (start->left != NULL){
            store(start->left);
        }
    }

    
    
    bool isValidBST(TreeNode* root) {
        if (root == NULL) return true;
            
        store(root);

        if (arr.size() >= 2){
            for (int i = 0; i < arr.size()-1; ++i)
                if (arr[i+1] >= arr[i])
                    return false;
        }
        
        return true;
    }
};