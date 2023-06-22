#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef  struct LinkedList{
	char *p_value;
	struct LinkedList *p_next;
}LinkedList;

LinkedList* LinkedList_new(char *p_value);
void LinkedList_insert(LinkedList *self,char *p_value);
void LinkedList_display(LinkedList *self);
void LinkedList_free(LinkedList *self);

#endif
