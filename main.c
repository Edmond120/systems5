#include<stdio.h>
#include"list.h"

int main()
{
	struct node * head = insert_front(NULL,0);
	int i;
	for(i = 1; i < 10;i++){
		head = insert_front(head,i);
	}
	print_list(head);
	printf("%p\n",free_list(head));
	//printf("%d,%p\n",head->data,head->next);
	print_list(head);
}
