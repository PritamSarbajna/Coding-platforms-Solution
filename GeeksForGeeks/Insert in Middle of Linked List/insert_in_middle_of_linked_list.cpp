/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	Node *newNode = new Node(x);
	Node *slow = head, *fast = head;
	while(fast->next != NULL && fast->next->next != NULL){
	    slow = slow->next;
	    fast = fast->next->next;
	}
	newNode->next = slow->next;
	slow->next = newNode;
	return head;
}
