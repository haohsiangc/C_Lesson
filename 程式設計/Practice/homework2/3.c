#include <stdio.h>
typedef struct person {
	char *name;
	struct person *friend;
} Person;
int main() {
	/*建好每個人的linked list
	ex. peter-->tom-->john
		john-->tom-->peter-->jessica
		tom-->peter-->john-->jessica
		.
		.
		.
	*/
	//function call
	know(peter, jessica);
	return 0;
}
void know(Person *A, Person *B) {
	/* 找到A的linked list
	   檢查list裡面有沒有B
	   if(沒有){
			跳到A的下一個person開始找
			ex. step1:peter's list(fault,because no jessica)
				step2:find tom's list(bingo!,jessica at the end)
	   }
	*/
}