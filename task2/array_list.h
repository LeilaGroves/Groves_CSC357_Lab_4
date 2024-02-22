#ifndef ARRAYLIST_H
#define ARRAYLIST_H

struct ArrayList;

struct ArrayList* array_list_new();

void array_list_add_to_end(struct ArrayList* list, const char* value);

#endif
