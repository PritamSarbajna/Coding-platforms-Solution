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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> mp;

        ListNode* temp = headA;
        while(temp != NULL){

            // Storing the nodes in a map
            mp[temp]++;

            temp = temp->next;
        }

        temp = headB;
        while(temp != NULL){
            //Finding the node if present
            if(mp.find(temp) != mp.end()){
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }
};
