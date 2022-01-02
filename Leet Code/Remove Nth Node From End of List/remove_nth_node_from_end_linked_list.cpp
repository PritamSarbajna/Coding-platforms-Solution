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
        
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        
        if(n == len){
            return head->next;
        }
        else{
            int pos = len - n;
            ListNode* current = head;
            ListNode* previous = NULL;
            
            for(int i=0; i<pos; i++){
                previous = current;
                current = current->next;
            }
            
            previous->next = current->next;
            return head;
        }
    }
};
