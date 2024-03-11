#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"list.h"

Node *prev(Node *head, Node *mynode)
{
	if(head == NULL){
		fprintf(stderr, "Empty list"); 
		exit(EXIT_FAILURE); 
	}
	while(head->next != mynode){
		head = head->next;
	}
	return head;
}

void removeEntry(Node **head, Node *entry)
{
	while((*head)!= entry){
		head = &(*head)->next;
	}
	*head = entry->next;
}


void removeEnd(Node **head){
	Node *temp;
	if(head== NULL){
		fprintf(stderr,"Allocation error"); 
		exit(EXIT_FAILURE);
	}
	while((*head)->next){
		head = &(*head)->next;
	} 
	*head = NULL; 
}

void insertPos(Node **head, Node *pos, Node *mynode)
{
	if(head== NULL){
		fprintf(stderr,"Allocation error"); 
		exit(EXIT_FAILURE);
	}
	if(pos == NULL && *head == NULL){
		*head = mynode;
	}
	while((*head)!= pos){
		head = &(*head)->next;
	}
	if(*head){
		mynode->next = (*head)->next;
		(*head)->next = mynode;
	}
}

void insertEnd(Node **head, Node *mynode)
{
	if(head== NULL){
		fprintf(stderr,"Allocation error"); 
		exit(EXIT_FAILURE);
	}
	if(*head==NULL){
		*head = mynode;
	}else{
		while((*head)->next){
			head = &(*head)->next;
		}	
		(*head)->next = mynode;
	}
}

Node *createNode(int value) 
{
	Node *mynode; 
	mynode = malloc(sizeof(Node)); 
	if(mynode == NULL){
		fprintf(stderr, "Malloc error"); 
		exit(EXIT_FAILURE);
	}
	mynode->value = value; 
	mynode->next = NULL; 
	return mynode;
}
void printNode(Node *mynode){
	if(mynode){
		printf("%d\n",mynode->value);
	}
}


void printList(Node *head){
	while(head){
		printNode(head);
		head = head->next;
	}

}


