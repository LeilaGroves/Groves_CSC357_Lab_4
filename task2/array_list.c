#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char **array;
	size_t capacity;
	size_t length;
} ArrayList;

ArrayList *array_list_new() {
	ArrayList *list = malloc(sizeof(ArrayList));
	if(list == NULL){
		printf("Memory allocation failed.\n");
		return 1;
	}
	(*list).array = malloc(sizeof(char *) * 20);//default set to 20
	if((*list).array == NULL){
		free(list);
		printf("Memory allocation failed. \n");
		return 1;
	}
	(*list).capacity = 20; //I chose 20
	(*list).length = 0;
	return list;
}

void array_list_add_to_end(ArrayList *list, const char *str) {
	if
