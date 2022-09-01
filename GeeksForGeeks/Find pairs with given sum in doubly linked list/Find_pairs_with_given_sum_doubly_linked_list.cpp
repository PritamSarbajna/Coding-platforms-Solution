/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
   vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
   {
       vector<pair<int, int>> sum;
       Node *p=head;
       Node*q=head;
       while(q->next)
       {
           q=q->next;
       }
       
       while(p->data < q->data)
       {
           if((p->data + q->data) == target)
           {
               sum.push_back(make_pair(p->data,q->data));
               p=p->next;
               q=q->prev;
           }
           else if((p->data + q->data) > target)
           {
               q = q->prev;
           }
           else
           {
               p = p->next;
           }
       }
       return sum;
   }
};
