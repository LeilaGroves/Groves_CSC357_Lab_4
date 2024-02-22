#include "checkit.h"
#include "array_list.h"

void test1(){
	struct ArrayList *list = array_list_new();
	if(list == NULL){
		printf("Failed to make an array list\n");
		return;
	}
	
	
}


int main(void) {
	test1();
	return 0;
}
