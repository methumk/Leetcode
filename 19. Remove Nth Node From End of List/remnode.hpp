#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) return head;
        
        int length = 0;
        ListNode* tmp = head;
        
        while(tmp != NULL){
            length++;
            tmp = tmp->next;
        }
        
        
        if (length == 1) return NULL;
            
        ListNode* itr = head, *prev = NULL, *hold;
        
        while(length != n){
            prev = itr;
            itr = itr->next;
            length--;
        }
        
        if (prev == NULL){
            return hold = itr->next;
        }else{
            hold = itr->next;
            delete(itr);
            prev->next = hold;
            return head; 
        }
        
        
        
    }
};