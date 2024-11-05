#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"

struct ArrayList{
	char **array;
	size_t capacity;
	size_t length;
};

ArrayList* array_list_new() {
	struct ArrayList *list = malloc(sizeof(struct ArrayList));
	if(list == NULL){
		printf("Memory allocation failed.\n");
		return NULL;
	}
	(*list).array = malloc(sizeof(char *) * 20);//default set to 20
	if((*list).array == NULL){
		free(list);
		printf("Memory allocation failed. \n");
		return NULL;
	}
	(*list).capacity = 20; //I chose 20
	(*list).length = 0;
	return list;
}

void array_list_add_to_end(ArrayList* list, const char *str) {
	if ((*list).length >= (*list).capacity){
		size_t bigger = (*list).capacity * 2; //Doubling the size
		char **new_array = realloc((*list).array, sizeof(char *) * bigger);
		if(new_array == NULL){
			printf("Memory realloc failed. \n");
			return;
		}
		(*list).array = new_array;
		(*list).capacity = bigger;
	}
	char *strdup(const char *str);
	list->array[list->length] = strdup(str);
	if ((*list).array[(*list).length] == NULL){
		printf("Strdup failed. \n");
		return;
	}
	(*list).length++;
}

char* get_arr(ArrayList* list, size_t length){
	if(list == NULL || length >= (*list).length){
		return NULL;
	}
	return list->array[length];
}	

size_t get_length(ArrayList* list){
	if(list == NULL){
		return 0;
	}
	return list->length;
}

void free_array_list(ArrayList* list){
	if(list == NULL){
		return;
	}
	for(size_t i = 0; i < (*list).length; i++){
		free((*list).array[i]);
	}
	free((*list).array);
	free(list);
}
	
