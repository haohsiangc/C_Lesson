#include <stdio.h>
void add(FILE *fptr);
void list(FILE *fptr);
int main() {
	FILE *fptr;
	// fopen opens file. Exit program if unable to create file
	if ((fptr = fopen("clients.txt", "a+")) == NULL) {
		puts("File could not be opened");
	}
	int choice;
	printf( "Enter 1 to list exist customer\n"
	        "2 to add a customer\n"
	        "other number to exit the program:");
	scanf("%d", &choice);
	while (choice == 1 || choice == 2) {
		switch (choice) {
		case 1:
			list(fptr);
			break;
		case 2:
			add(fptr);
			break;
		default:
			break;
		}
		printf( "Enter 1 to list exist customer\n"
		        "2 to add a customer\n"
		        "other number to exit the program:");
		scanf("%d", &choice);
	}
	fclose(fptr);
	return 0;
}
void list(FILE *fptr) {
	rewind(fptr);
	char tmpstring[50];
	while (fgets(tmpstring, 50, fptr) != NULL) {
		printf("%s", tmpstring);
	}
}
void add(FILE *fptr) {
	puts("Enter the customerID, name, and balance.");
	puts("Enter EOF to end input.");
	char customerID[30]; // customerID number
	char name[30]; // customerID name
	double balance; // customerID balance
	scanf("%30s%30s%lf", customerID, name, &balance);
	// write customerID, name and balance into file with fprintf
	while (!feof(stdin)) {
		fprintf(fptr, "%s %s %.2f\n", customerID, name, balance);
		scanf("%30s%30s%lf", customerID, name, &balance);
	}
}
