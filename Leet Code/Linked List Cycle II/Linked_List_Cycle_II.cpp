/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectLoop(ListNode *head){
        ListNode *slow = head, *fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || detectLoop(head) == NULL){
            return NULL;
        }
        
        ListNode *start = head;
        ListNode *last = detectLoop(head);
        
        while(start != last){
            start = start->next;
            last = last->next;
        }
        return start;
    }
};
