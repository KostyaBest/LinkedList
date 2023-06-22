
#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"


LinkedList* LinkedList_new(char *p_value){
	LinkedList* self=(LinkedList*)malloc(sizeof(LinkedList));
	self->p_value = p_value;
	self->p_next=NULL;
	return self;
}

void LinkedList_insert(LinkedList *self,char *p_value){
	LinkedList *tmp=self;
	while(tmp->p_next!=NULL){
		tmp=tmp->p_next;
	}
	tmp->p_next=LinkedList_new(p_value);
}

void LinkedList_display(LinkedList *self){
	LinkedList *tmp=self;	
	while(tmp != NULL)
	{
		printf("%s\n",tmp->p_value);
		tmp=tmp->p_next;
	}
}
void LinkedList_free(LinkedList *self){
	LinkedList* tmp=self;
	while(tmp!=NULL)
	{
		LinkedList *prev=tmp;
		tmp=tmp->p_next;
		free(prev);
	}
	free(tmp);
}
