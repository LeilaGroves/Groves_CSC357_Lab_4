#ifndef ARRAYLIST_H
#define ARRAYLIST_H

typedef struct ArrayList ArrayList;

ArrayList* array_list_new();

void array_list_add_to_end(struct ArrayList* list, const char* value);

char* get_arr(ArrayList* list, size_t length);

size_t get_length(ArrayList* list);

void free_array_list(ArrayList* list);

#endif
