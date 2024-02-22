#include "checkit.h"
#include "array_list.h"

void test1(){
	ArrayList *list = array_list_new();
	if(list == NULL){
		printf("Failed to make an array list\n");
		return;
	}
	array_list_add_to_end(list, "Yayyy");
	array_list_add_to_end(list, "Test success!");
	char* expected1 = "Yayyy";
	char* expected2 = "Test success!";

	checkit_string(get_arr(list, 0), expected1);
	checkit_string(get_arr(list, 1), expected2);
	//size_t length = list->length;
	checkit_int(get_length(list), 2);
	free_array_list(list);	
}

void test2(){
	ArrayList *list = array_list_new();
        if(list == NULL){
                printf("Failed to make an array list\n");
                return;
        }
	array_list_add_to_end(list, "One");
	array_list_add_to_end(list, "Two");
	array_list_add_to_end(list, "3");
	array_list_add_to_end(list, "4");
	array_list_add_to_end(list, "5");
        array_list_add_to_end(list, "6");
        array_list_add_to_end(list, "7");
        array_list_add_to_end(list, "8");
	array_list_add_to_end(list, "9");
        array_list_add_to_end(list, "10");
        array_list_add_to_end(list, "11");
        array_list_add_to_end(list, "12");
	array_list_add_to_end(list, "13");
        array_list_add_to_end(list, "14");
        array_list_add_to_end(list, "15");
        array_list_add_to_end(list, "16");
	array_list_add_to_end(list, "17");
        array_list_add_to_end(list, "18");
        array_list_add_to_end(list, "19");
        array_list_add_to_end(list, "20");
	//Should make it bigger here
	array_list_add_to_end(list, "Very");
	array_list_add_to_end(list, "End");
	char* expect = "Very";
	char* expected = "End";

	checkit_string(get_arr(list, 20), expect);//"Very"
	checkit_string(get_arr(list, 21), expected);//End
	checkit_int(get_length(list), 22);
	free_array_list(list);
	
}

int main(void) {
	test1();
	test2();
	return 0;
}
