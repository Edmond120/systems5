#include<stdio.h>
#include<stdlib.h>
#include "list.h"

void print_list(struct node * list)
{
	printf("[ %d",list->data);
	list = list->next;
	while(list){
		printf(", %d",list->data);
		list = list->next;
	}
	printf("]\n");
	return;
}

struct node * insert_front(struct node * list,int num)
{
	struct node * new_node = (struct node  *)malloc(sizeof(struct node));
	new_node->data = num;
	new_node->next = list;
	return new_node;
}
struct node * free_list(struct node * list)
{
	struct node * temp;
	while(list->next){
		temp = list->next;
		free(list);
		list = temp;
	}
	free(list->next);
	free(list);
	return list;
}
