
#include "linkedlist.h"


int main(){
	char* word="Hello";

	LinkedList* list=LinkedList_new(word);
	LinkedList_insert(list,word);	
	LinkedList_insert(list,word);	
	LinkedList_insert(list,word);	
	LinkedList_insert(list,word);	
	LinkedList_insert(list,word);	
	LinkedList_display(list);
	LinkedList_free(list);
}
