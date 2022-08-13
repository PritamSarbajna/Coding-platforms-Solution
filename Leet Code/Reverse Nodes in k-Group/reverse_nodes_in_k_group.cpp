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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL){
            return NULL;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next;
        int count = 0;
        
        while(curr != NULL && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next != NULL){
            
            if(getLength(next) < k){
                head->next = next;
                return prev;
            }
            
            head->next = reverseKGroup(next, k);
        }
        
        return prev;
    }
    
    int getLength(ListNode* head){
        ListNode* temp = head;
        int size = 0;
        
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }
};
