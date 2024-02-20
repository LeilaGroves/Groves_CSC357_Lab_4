#include "checkit.h"
#include "task1.h"

void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test2() {
	char input[] = "Another TEST  ";
	char result[16];
	char *expected = "another test  ";

	str_lower(input, result);
	checkit_string(result, expected);
}
void test3() {
	char input[] = "FoR the OthER ";
	char *expected = "for the other ";

	str_lower_mutate(input);
	checkit_string(input, expected);
}

int main(void) {
   test1();
   test2(); 
   test3();
   return 0;
}
