typedef struct node{
	int value; 
	struct node *next;
}Node;

Node *prev(Node *head, Node *mynode);
void removeEntry(Node **head, Node *entry);
void removeEnd(Node **head);
void insertPos(Node **head, Node *pos, Node *mynode);
void insertEnd(Node **head, Node *mynode);
Node *createNode(int value);
void printNode(Node *mynode);
void printList(Node *head);
