// Leetcode - 24
// Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode* temp = head;
        
        while(temp != NULL and temp->next != NULL) {
            int data = temp->val;
            temp->val = temp->next->val;
            temp->next->val = data;
            
            temp = temp->next->next;
        }
        
        return head;
    }
};