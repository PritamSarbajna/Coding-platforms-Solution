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
    
    ListNode* getmid(ListNode *head){
        ListNode *slow = head, *fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextPtr;
        
        while(curr != NULL){
            nextPtr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextPtr;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL){
            return true;
        }
        
        ListNode *middle = getmid(head);
        ListNode *temp = middle->next;
        middle->next = reverse(temp);
        
        ListNode *head1 = head, *head2 = middle->next;
        while(head2 != NULL){
            if(head1->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return true;
    }
};
