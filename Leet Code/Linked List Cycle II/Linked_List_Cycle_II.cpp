// Approach 1 :

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



// Approach 2 :

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
    ListNode *detectCycle(ListNode *head) {

        if(head == NULL){
            return NULL;
        }

        ListNode *low = head, *high = head;
        bool cycle = false;
        
        while(high != NULL && high->next != NULL){

            low = low->next;
            high = high->next->next;

            if(low == high){
                cycle = true;
                break;
            }
        }
        
        if(!cycle){
            return NULL;
        }
        else{
            high = head;
            while(low != high){
                low = low->next;
                high = high->next;
            }
            return low;
        }
    }
};
