#include <stdio.h>
#include <string.h>
typedef struct person {
	char *name;
	struct person *friend[5];
} Person;
int main() {
	//declare person
	Person peter, john, tom, jessica, jean, mary, mike;
	//assign their name
	strcpy(peter.name, "Peter");
	strcpy(john.name, "John");
	strcpy(tom.name, "Tom");
	strcpy(jessica.name, "Jessica");
	strcpy(jean.name, "Jean");
	strcpy(mary.name, "Mary");
	strcpy(mike.name, "Mike");
	//peter's frineds
	peter.friend[0] = &john;
	peter.friend[1] = &tom;
	//john's friends
	john.friend[0] = &peter;
	john.friend[1] = &tom;
	john.friend[2] = &jessica;
	//tom's friends
	tom.friend[0] = &peter;
	tom.friend[1] = &john;
	tom.friend[2] = &jessica;
	//jessica's friends
	jessica.friend[0] = &tom;
	jessica.friend[1] = &jean;
	jessica.friend[2] = &mike;
	//jean's friend
	jean.friend[0] = &jessica;
	//mike's friend
	mike.friend[0] = &mary;
	//mary's friend
	mary.friend[0] = &mike;
	printf("%p\n", &mike );
	return 0;
}